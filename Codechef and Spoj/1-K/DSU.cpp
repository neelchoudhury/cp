#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll arr[100010], size[100010];

//modified initialize function:
void initialize( ll arr[ ], ll N)
{
    for(ll i = 0;i<N;i++)
    {
		arr[ i ] = i ;
		size[ i ] = 1;
	}
}

//finding root of an element.
ll root(ll arr[ ],ll i)
{
    while(arr[ i ] != i)           //chase parent of current element until it reaches root.
    {
     i = arr[ i ];
    }
    return i;
}

/*modified union function where we connect the elements by changing the root of one of the element */

void weightedunion(ll arr[ ],ll size[ ],ll A,ll B)
{
    ll root_A = root(A);
    ll root_B = root(B);
    if(size[root_A] < size[root_B ])
    {
		arr[ root_A ] = arr[root_B];
		size[root_B] += size[root_A];
	}
   	else
    {
		arr[ root_B ] = arr[root_A];
		size[root_A] += size[root_B];
	}

}

bool find(ll A,ll B)
{
    if( root(A)==root(B) )       //if A and B have same root,means they are connected.
    	return true;
    else
    	return false;
}

int main()
{
	return 0;
}