#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll c[110], type[110][7], ans[110], bing[110];

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		memset(c,0,sizeof(c));
		memset(type,0,sizeof(type));
		memset(ans,0,sizeof(ans));
		memset(bing, 0, sizeof(bing));
		scanf("%lld", &n);
		ll x;
		for(ll i=0; i<n;i++)
		{
			
			scanf("%lld", &c[i]);
			for(ll j=0; j<c[i]; j++)
			{
				scanf("%lld", &x);
				type[i][x-1]++;
			}
			ll cnt=0;
			for(ll j=0; j<6; j++)
			{
				if(type[i][j]!=0)
					cnt++;
				//cout<<type[i][j]<<" ";
			}
			//cout<<endl;
			//cout<<"qq "<<cnt<<endl;
			ll vv=0;
			if(cnt==6)
			{
				sort(type[i], type[i]+6);
				vv=4*type[i][0];
				ll f=0;
				if(type[i][1]!=type[i][0])
				{
					vv+=2*(type[i][1]-type[i][0]);
				}
				if(type[i][2]!=type[i][1])
				{
					vv+=(type[i][2]-type[i][1]);
				}
			}
			else if(cnt==5)
			{
				sort(type[i], type[i]+6);
				vv=2*type[i][1];
				ll f=0;
				if(type[i][2]!=type[i][1])
				{
					vv+=(type[i][2]-type[i][1]);
				}
			}
			else if (cnt==4)
			{
				sort(type[i], type[i]+6);
				vv=type[i][2];
			}
			ans[i]=c[i]+vv;
			//cout<<"bing "<<ans[i]<<endl;	
		}
		ll qq=ans[0];
		for(ll i=0; i<n; i++)
			bing[i]=ans[i] ;
	//	cout<<endl;
		sort(ans,ans+n);
		reverse(ans, ans+n);
		if(ans[0]==ans[1])
		{
			cout<<"tie"<<endl;
		}
		else
		{
			if(ans[0]==qq)
			{
				cout<<"chef"<<endl;
			}
			else
			{
				for(ll i=0; i<n; i++)
				{
					if(ans[0]==bing[i])
					{
						cout<<i+1<<endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}
