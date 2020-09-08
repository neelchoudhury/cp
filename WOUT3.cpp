#include<bits/stdc++.h>
#define ll long long int
 
ll cnt[1000010][2];
ll a[1000010];
 
using namespace std;
 
int main()
{
	ll t,n,h,x,y;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &h);
	 
		//ll cnt[n][2];
		//memset(cnt,0,sizeof(cnt));
		
		for(ll i=0; i<n; i++)
			cnt[i][0]=0,cnt[i][1]=0;
		for(ll i=0; i<n; i++)
		{
			scanf("%lld %lld", &x, &y);
			cnt[x][1]++;
			cnt[y][0]++;
		}
		/*for(int i=0; i<n; i++)
			cout<<cnt[i][0]<<" "<<cnt[i][1]<<endl ;
		cout<<endl;*/
		//ll a[n];
		for(ll i=0; i<n; i++)
			a[i]=n;
		/*for(int i=0; i<n; i++)
			cout<<a[i]<<" ";
		cout<<endl;*/
		ll add=0;
		for(ll i=0; i<n; i++)
		{
			add=add+cnt[i][1];
			a[i]-=add;
			add=add-cnt[i][0];
		}
		/*for(int i=0; i<n; i++)
			cout<<a[i]<<" ";
		cout<<endl;*/
		ll sum=0,ans=0;
		for(ll i=0; i<h; i++)
			sum+=a[i] ;
	//	cout<<sum<<" sum"<<endl;
		ans=sum;
		for(ll i=h; i<n; i++)
		{
		//	cout<<"run4"<<endl;
			//cout<<sum<<" sum "<<" ans "<<ans<<endl;
			sum=sum+a[i]-a[i-h];
			ans=min(ans,sum );
			
		}
		printf("%lld\n", ans);
	}
	return 0;
} 
