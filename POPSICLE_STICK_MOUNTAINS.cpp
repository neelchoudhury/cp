#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std;

unsigned long int catalan[100010];

void catalanDP(unsigned int n)
{
    // Table to store results of subproblems
    
 
    // Initialize first two values in table
    catalan[0] = catalan[1] = 1;
 
    // Fill entries in catalan[] using recursive formula
    for (int i=2; i<=n; i++)
    {
        catalan[i] = 0;
        for (int j=0; j<i; j++)
        {
        	catalan[i] += (catalan[j] * catalan[i-j-1])%MOD;
        	catalan[i]%=MOD;
        }
            
    }
 
    // Return last entry
    // return catalan[n];
}

int main()
{
	catalanDP(2000);
	catalan[0]=0;
	for(ll i=1; i<=2000; i++)
	{
		catalan[i]+=catalan[i-1];
		catalan[i]%=MOD;
	}
		
	ll t,n;
	ios;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n/=2;
		cout<<catalan[n]<<endl;
	}
	return 0;
}