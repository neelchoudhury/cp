#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define ff first
#define ss second
#define pb push_back
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
 
using namespace std;
 
ll a[100010];
ll sq[400];
 
int main()
{
	ios;
	ll n,q,ch,x,y,z;
	cin>>n;
	mem(a);
	ll ss=sqrt(n)+1;
	mem(sq);
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
		sq[(i)/ss]+=a[i];
	}
	/*for(ll i=0; i<ss; i++)
		cout<<sq[i]<<" ";
	cout<<endl;*/
	for(ll i=ss-2; i>=0; i--)
	{
		sq[i]+=sq[i+1];
	}
	/*for(ll i=0; i<ss; i++)
		cout<<sq[i]<<" ";
	cout<<endl;*/
	cin>>q;
	while(q--)
	{
		cin>>ch;
		if(ch==1)
		{
			cin>>x>>y;
			ll qq=(x-1)/ss;
			for(ll i=qq; i>=0; i--)
			{
				sq[i]+=(y-a[x-1]);
			}
			a[x-1]=y;
			/*for(ll i=0; i<ss; i++)
		cout<<sq[i]<<" ";
	cout<<endl;*/
		}
		else if(ch==2)
		{
			cin>>z;
			ll i;
			for( i=ss-1; i>=0; i--)
			{
				if(sq[i]>=z)
					break;
			}
			//cout<<"bing "<<sq[i]<<endl;
			ll ans=0;
			if(sq[i]==z)
			{
				//
				
				cout<<"YES"<<endl;
				continue;
			}
			if(i<ss-1)
				ans=sq[i+1];
				//cout<<"vv "<<ans<<endl;
			i++;
			i=ss*i;
			ll f=0;
			//cout<<"aa "<<i<<endl;
			for(ll j=i-1; j>=max(i-ss,(ll)0); j--)
			{
				//cout<<"cc "<<j<<" "<<a[j]<<endl;
				ans+=a[j];
				if(ans==z)
				{
					f=1;
					break;
				}
			}
			if(f==0)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
		
	}
	return 0;
} 