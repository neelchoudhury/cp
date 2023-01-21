#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second

using namespace std;

ll a[100010];
ll b[100010];
vector<ll> v[100010];

void pr(ll n, ll ii)
{
    // Print the number of 2s that divide n
    int flag=0;
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        if(flag==0)
        	v[ii].push_back(2),flag=1;
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        flag=0;
        while (n%i == 0)
        {
            //printf("%d ", i);
            if(flag==0)
            	v[ii].push_back(i),flag=1;
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
    	v[ii].push_back(n);
        //printf ("%d ", n);
}

int main()
{
	ios;
	ll t,n;
	cin>>t;
	while(t--)
	{
		for(ll i=0; i<100010; i++)
		
			v[i].clear();
		cin>>n;
		mem(b);
		for(ll i=1; i<=n; i++)
			cin>>a[i];
		for(ll i=2; i<=n; i++)
			pr(i,i);
	/*	for(int i=0; i<10; i++)
		{
			for(int j=0;j<v[i].size(); j++)
				cout<<v[i][j]<<" ";
			cout<<endl;
		}*/
		for(ll i=2; i<=n; i++)
		{
			for(ll j=0; j<v[i].size(); j++)
			{
				b[v[i][j]]+=a[i];
			}
		}
		ll ans=0;
		for(ll i=1; i<=100010; i++)
		{
			ans=max(ans,b[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
