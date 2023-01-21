#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

bool a[100010];
vector<ll> v;
vector<ll>::iterator ii;

int main()
{
	ios;
	ll n,k,x;
	mem(a);
	cin>>n>>k;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		ii=find(v.begin(),v.end(), x);
		if(ii==v.end())
		{
			v.pb(x);
		}
	}
	ll ans=0;
	ll occ=0;
	ll fw=1,bc=0;
	// cout<<v.size()<<endl;
	for(ll i=1; i<v.size(); i++)
	{
		// cout<<"gg"<<endl;
		if(fw==1)
		{
			// cout<<occ<<" "<<i<<endl;
			occ+=v[i]-v[i-1];
			if(occ<k)
			{
				continue;
			}
			else
			{
				// cout<<i<<" ent"<<endl;
				if(a[i-1]==0)
				{
					a[i-1]=1;
					ans+=1;
				}
				// cout<<i<<" "<<v[i]<<" ghgh "<<v[i-1]<<" "<<i-1<<endl;
				if(i>=0 and v[i]-v[i-1]>k)
				{
					 
						ans+=1;
						a[i]=1;
					 
					// cout<<"dd "<<i<<endl;
					occ=0;
					fw=1;
					bc=0;
				}
				else
				{
					occ-=2*(v[i]-v[i-1]);
					fw=0;
					bc=1;
				}
				 
			}
		}
		else if(bc==1)
		{
			occ-=v[i]-v[i-1];
			if(occ>0)
			{
				continue;
			}
			else
			{
				if(i>=0 and v[i]-v[i-1]>k)
				{
					 
						ans+=1;
						a[i-1]=1;
					  
					occ=0;
					fw=1;
					bc=0;
				}
				else
				{
					occ+=2*(v[i]-v[i-1]);
					fw=1;
					bc=0;
				}
				//i--;
			}
		}
		
	}
	reverse(v.begin(),v.end());
	fw=1,bc=0;
	mem(a);
	ll aa=ans;
	ans=0;
	occ=0;
	for(ll i=1; i<v.size(); i++)
	{
		// cout<<"gg"<<endl;
		if(fw==1)
		{
			 // cout<<occ<<" "<<i<<endl;
			occ+=abs(v[i]-v[i-1]);
			if(occ<k)
			{
				continue;
			}
			else
			{
				// cout<<i<<" ent"<<endl;
				if(a[i-1]==0)
				{
					a[i-1]=1;
					ans+=1;
				}
				// cout<<i<<" "<<v[i]<<" ghgh "<<v[i-1]<<" "<<i-1<<endl;
				if(i>=0 and abs(v[i]-v[i-1])>k)
				{
					 
						ans+=1;
						a[i]=1;
					 
					// cout<<"dd "<<i<<endl;
					occ=0;
					fw=1;
					bc=0;
				}
				else
				{
					occ-=2*abs(v[i]-v[i-1]);
					fw=0;
					bc=1;
				}
				 
			}
		}
		else if(bc==1)
		{
			occ-=abs(v[i]-v[i-1]);
			if(occ>0)
			{
				continue;
			}
			else
			{
				if(i>=0 and abs(v[i]-v[i-1])>k)
				{
					 
						ans+=1;
						a[i-1]=1;
					  
					occ=0;
					fw=1;
					bc=0;
				}
				else
				{
					occ+=2*abs(v[i]-v[i-1]);
					fw=1;
					bc=0;
				}
				//i--;
			}
		}
		
	}
	ans=min(aa,ans);
	cout<<ans<<endl;
	return 0;
}