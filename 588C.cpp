#include<bits/stdc++.h>
#define ll long long int
#define N 1000010

using namespace std;

ll a[N];
ll b[N];

int main()
{
	ios_base::sync_with_stdio(false);
	 
	ll n;
	ll ctr=0;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i],ctr+=a[i];
	}
	sort(a,a+n);
	for(ll i=0; i<N; i++)
		b[i]=0;
	
	ll cnt=1;
	ll v=a[0];
	
	for(ll i=1; i<n; i++)
	{
		if(a[i]==a[i-1])
		{
			cnt++;
		}
		if(a[i]!=a[i-1] or i==n-1)
		{
			b[v]=cnt;
			//cout<<b[v]<<" "<<v<<" i "<<i<<endl;
			if(i!=n-1)
				cnt=1;
			v=a[i];
			
		}
	}
	
	b[a[n-1]]=cnt;
	
	ll ans=0;
	
	/*for(int i=0; i<n; i++)
		cout<<b[i]<<" ";
	cout<<endl;*/
	//cout<<"  fsgsg "<<b[3]<<endl;
	ctr=n;
	
	for(ll i=0; i<N and ctr>0; i++)
	{
	//	cout<<i<<" i ctr "<<ctr<<endl;
	//	cout<<"bi "<<b[i]<<endl;
		if(b[i]%2==1)
		{
			//cout<<"ushfi"<<endl;
			//cout<<b[i]<<" "<<i<<endl;
			ctr-=1;
			ans+=1;
			b[i]-=1;
		}
		if(b[i]%2==0)
		{
		//	cout<<"fsfv  i "<<i<<endl;
			ans+=(b[i]/2);
			ctr-=b[i];
			ll qq=b[i];
			b[i]=0;
			
			qq/=2;
			for(ll j=i+1;j<N and ctr>0 ; j++)
			{
				
				if(b[j]==0)
				{
					break;
				}
				else
				{
					if(b[j]>=qq)
					{
						b[j]-=qq;
						qq/=2;
					}
					else
					{
						qq=b[j];
						if(b[j]%2==0)
						
						{
							b[j]=0;
							qq/=2;
						}
						else
						{
							b[j]=1;
							qq/=2;
						}
						
					}
					
				}
			}
		}
	
	}
	
	cout<<ans<<endl;
	
	return 0;
}
