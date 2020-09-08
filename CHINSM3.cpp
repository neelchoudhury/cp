#include<bits/stdc++.h>
#define ll long long int
#define N 100010
 
using namespace std;
 
ll a[N],p[N],q[N],cal[N],dp[N],r[N];
 
int main()
{
	ll n,k;
	memset(a,0,sizeof(a));
	memset(p,0,sizeof(p));
	memset(q,-1,sizeof(q));
	memset(cal,0,sizeof(cal));
	memset(dp,0,sizeof(dp));
	memset(r,-1,sizeof(r));
	scanf("%lld %lld", &n, &k);
	ll mux=0;
	for(ll i=0; i<n; i++)
	{
		
		scanf("%lld", &a[i]);
		//cout<<a[i]<<" "<<i<<endl;
		p[a[i]]=1;
		mux=max(mux,a[i]);
		
	}
	for(ll i=0;i<n;i++)
		r[a[i]]=i+1;
	/*cout<<"r 8 "<<r[8]<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;*/
	vector<ll> v[n];
	ll j,flag=0;
//	cout<<mux<<" mux"<<endl;
	for(ll i=0; i<n; i++)
	{
		j=k,flag=0;
		while(a[i]>k and j<mux )
		{	if( k!=0 and flag==0)
				v[i].push_back(j),flag=1;
			j+=a[i];
			v[i].push_back(j);
			//cout<<"done "<<endl;
			
		}
	}
	/*for(ll i=0; i<n; i++)
	{
		for(int j=0; j<v[i].size(); j++)
			cout<<v[i][j]<<" "<<i<<" "<<j<<endl;
		cout<<endl;
	}*/
	ll ret;
	q[a[0]]=0;
	for(ll i=1; i<n; i++)
	{
		ret=0;
		q[a[i]]=0;
		ll j;
		if(k==0 or a[i]==1)
			j=1;
		else j=0;
		for(; j<v[i].size(); j++)
		{
			if(p[v[i][j]]==1 and q[v[i][j]]!=-1)
			{
				//q[v[i][j]]=i;
				ret=max(ret,r[v[i][j]]);
				//cout<<v[i][j]<<" "<<q[v[i][j]]<<" "<<r[v[i][j]]<<endl;
				if(ret==r[v[i][j]])
					q[v[i][j]]=i;
			}
			
		}
		ret=max(ret,cal[i-1]);
		cal[i]=ret;
		for(j=i+1; j<n; j++)
		{
			if(a[i]%a[j]==k)
				q[a[j]]=max(q[a[j]],a[i]);
		}
	}
	for(int i=0; i<n; i++)
		cout<<cal[i]<<" ";
	cout<<endl;
	
	dp[0]=0;
	ll ans =0;
	for(ll i=n-1; i>=0; i--)
	{
		dp[i]=max(n+1,i-cal[i]);
		for(ll j=i-1; j>=0; j--)
		{
			
		}
		ans+=dp[i];
	}
	for(int i=0; i<n; i++)
		cout<<dp[i]<<" ";
	cout<<endl;
	ans+=n;
	printf("%lld\n",ans);
	return 0;
} 
