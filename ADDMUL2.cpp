// Program to show segment tree operations like construction, query and update
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

// A utility function to get the middle index from corner indexes.
ll getMid(ll s, ll e) {  return s + (e -s)/2;  }

/*  A recursive function to get the sum of values in given range of the array.
    The following are parameters for this function.

    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially 0 is
             passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment represented by
                 current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
ll getSumUtil(ll *st, ll ss, ll se, ll qs, ll qe, ll index)
{
    // If segment of this node is a part of given range, then return the 
    // sum of the segment
    if (qs <= ss && qe >= se)
        return st[index];

    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 0;

    // If a part of this segment overlaps with the given range
    ll mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*index+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*index+2);
}

/* A recursive function to update the nodes which have the given index in
   their range. The following are parameters
    st, index, ss and se are same as getSumUtil()
    i    --> index of the element to be updated. This index is in input array.
   diff --> Value to be added to all nodes which have i in range */
void updateValueUtil(ll *st, ll ss, ll se, ll i, ll diff, ll index)
{
    // Base Case: If the input index lies outside the range of this segment
    if (i < ss || i > se)
        return;

    // If the input index is in range of this node, then update the value
    // of the node and its children
    if(st[index]+diff>0)
    	st[index] = (st[index] + diff)%MOD;
    else
    	st[index]=(st[index] + diff+MOD)%MOD;
    if (se != ss)
    {
        ll mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*index + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*index + 2);
    }
}

// The function to update a value in input array and segment tree.
// It uses updateValueUtil() to update the value in segment tree
void updateValue_add(ll arr[], ll *st, ll n, ll i, ll new_val)
{
    // Check for erroneous input index
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }

    // Get the difference between new value and old value
    ll diff = new_val;

    // Update the value in array
    arr[i] = arr[i]+new_val;

    // Update the values of nodes in segment tree
    updateValueUtil(st, 0, n-1, i, diff, 0);
}

// The function to update a value in input array and segment tree.
// It uses updateValueUtil() to update the value in segment tree
void updateValue_mul(ll arr[], ll *st, ll n, ll i, ll new_val)
{
    // Check for erroneous input index
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }

    // Get the difference between new value and old value
    ll diff = new_val*arr[i] - arr[i];

    // Update the value in array
    arr[i] = new_val*arr[i];

    // Update the values of nodes in segment tree
    updateValueUtil(st, 0, n-1, i, diff, 0);
}

// The function to update a value in input array and segment tree.
// It uses updateValueUtil() to update the value in segment tree
void updateValue_val(ll arr[], ll *st, ll n, ll i, ll new_val)
{
    // Check for erroneous input index
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }

    // Get the difference between new value and old value
    ll diff = new_val - arr[i];

    // Update the value in array
    arr[i] = new_val;

    // Update the values of nodes in segment tree
    updateValueUtil(st, 0, n-1, i, diff, 0);
}



// Return sum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses getSumUtil()
ll getSum(ll *st, ll n, ll qs, ll qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return getSumUtil(st, 0, n-1, qs, qe, 0);
}

// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
ll constructSTUtil(ll arr[], ll ss,  ll se,  ll *st, ll  si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }

    // If there are more than one elements, then recur for left and
    // right subtrees and store the sum of values in this node
    ll mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}

/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
ll *constructST(ll arr[], ll n)
{
    // Allocate memory for segment tree
    ll x = (ll)(ceil(log2(n))); //Height of segment tree
    ll max_size = 2*(ll)pow(2, x) - 1; //Maximum size of segment tree
    ll *st = new ll[max_size];

    // Fill the allocated memory st
    constructSTUtil(arr, 0, n-1, st, 0);

    // Return the constructed segment tree
    return st;
}

// Driver program to test above functions
int main()
{
    ll n,q;
    scanf("%lld %lld", &n, &q );
    ll arr[n];
    for(ll i=0; i<n; i++)
    	scanf("%lld", &arr[i]);

    // Build segment tree from given array
    ll *st = constructST(arr, n);
	ll ch,l,r,v;
	while(q--)
	{
		scanf("%lld", &ch);
		if(ch<4)
		{
			scanf("%lld %lld %lld", &l,&r,&v);
			if(ch==1)
			{
				for(ll i=l-1; i<=r-1; i++)
				{
					updateValue_add(arr, st,n, i, v);
				}
			}
			if(ch==2)
			{
				for(ll i=l-1; i<=r-1; i++)
				{
					updateValue_mul(arr,st,n, i,v);
				}
			}
			if(ch==3)
			{
				for(ll i=l-1; i<=r-1; i++)
				{
					updateValue_val(arr,st,n,i,v);
				}
			}
		
		}
		else
		{
			scanf("%lld %lld", &l, &r);
			ll ans=	getSum(st, n, l-1, r-1);
			printf("%lld\n", ans);
		}
	}
    return 0;
}
