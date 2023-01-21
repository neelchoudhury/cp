#include<bits/stdc++.h>
#define ll long long int

static int total_nodes;

using namespace std;
vector<ll> v;
void printSubset(ll A[], ll size)
{
     
        //printf("%d ", size);
        v.push_back(size);
		/*for(int i=0; i<size; i++)
			cout<<A[i]<<" ";
		cout<<endl;*/

    //printf("\n");
}

// inputs
// s            - set vector
// t            - tuplet vector
// s_size       - set size
// t_size       - tuplet size so far
// sum          - sum so far
// ite          - nodes count
// target_sum   - sum to be found
//static int f;
void subset_sum(ll s[], ll t[],ll s_size, ll t_size,ll sum, ll ite,ll const target_sum   )
{
    total_nodes++;
    if( target_sum == sum )
    {
        // We found subset
        //f=1;
        printSubset(t, t_size);
        // Exclude previously added item and consider next candidate
        subset_sum(s, t, s_size, t_size-1, sum - s[ite], ite + 1, target_sum);
        return;
    }
    else
    {
        // generate nodes along the breadth
        for( ll i = ite; i < s_size; i++ )
        {
            t[t_size] = s[i];
            // consider next level node (along depth)
            subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
        }
    }
}

// Wrapper to print subsets that sum to target_sum
// input is weights vector and target_sum
void generateSubsets(ll s[], ll size, ll target_sum)
{
    ll *tuplet_vector = (ll *)malloc(size * sizeof(ll));
	v.clear();
    subset_sum(s, tuplet_vector, size, 0, 0, 0, target_sum);
    sort(v.begin(), v.end());
    if(v.size()!=0)
    {
    	sort(v.begin(), v.end());
    	cout<<v[0]<<" ";
    	for(int i=1; i<v.size(); i++)
    	{
    		if(v[i]!=v[i-1])
    			cout<<v[i]<<" ";
    	}
    	cout<<endl;
	}
	else
		cout<<"That\'s impossible!"<<endl;
    free(tuplet_vector);
}

int main()
{
	ll n=1,q=1;
	scanf("%lld %lld", &n, &q);
	while(n!=0 and q!=0)
	{
	
		ll a[n];
		for(ll i=0;i<n; i++)
			scanf("%lld", &a[i]);
		 
		sort(a,a+n);
		ll x;
		while(q--)
		{
			scanf("%lld", &x);
			generateSubsets(a, n,x);
		}
		scanf("%lld %lld", &n, &q);
	}
	return 0;
}
