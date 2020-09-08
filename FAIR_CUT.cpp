#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll a[3003];

int main()
{
	ll n,k;
	cin>>n>>k;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll ans=INT_MAX;
    ll val=0;
    if(k==1 or n-k==1)
    {
    	for(ll i=0; i<n; i++)
    	{
         val=0;
    		for(ll j=0; j<n; j++)
    		{
    			val+=abs(a[i]-a[j]);
    		}
         ans=min(ans,val);
    	}
	   cout<<ans<<endl;
	}
	else if(k==3 or n-k==3)
	{
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n; j++)
			{
                for(ll m=0;m<n; m++)
                    {
				if(j!=i and j!=m and i!=m)
				{
					val=0;
					for(ll k=0; k<n; k++)
					{
						if(k!=i and k!=j and k!=m)
							val+=abs(a[i]-a[k])+abs(a[k]-a[j])+abs(a[k]-a[m]);
					}
					ans=min(val,ans);
				}
                }
				
			}
		}
        cout<<ans<<endl;
	}
    else if(k==4 or n-k==4)
	{
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n; j++)
			{
                for(ll m=0;m<n; m++)
                    {
                    for(ll q=0; q<m; q++)
                        {
				if(j!=i and j!=m and i!=m and i!=q and j!=q and m!=q)
				{
					val=0;
					for(ll k=0; k<n; k++)
					{
						if(k!=i and k!=j and k!=m and k!=q)
							val+=abs(a[i]-a[k])+abs(a[k]-a[j])+abs(a[k]-a[m])+abs(a[k]-a[q]);
					}
					ans=min(val,ans);
				}
                }
                }
				
			}
		}
        cout<<ans<<endl;
	}
	return 0;
}
