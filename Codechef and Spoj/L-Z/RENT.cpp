#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999 

using namespace std;

struct vq{
	ll st,en,val;
};

ll cmp(struct vq v1, struct vq v2)
{
	return v1.en < v2.en;
}

vq v[30030];
ll dp[2000020];

int main()
{
	ios;
	ll t,n;	
	cin>>t;
	ll x,y,z;
	while(t--)
	{
		mem(dp);
		cin>>n;
		 
		for(ll i=0; i<n; i++)
		{
			cin>>x>>y>>z;
			v[i].st=x;
			v[i].en=x+y;
			v[i].val=z;	 
		}
		sort(v,v+n, cmp);
		
		int j=0;
		if(v[j].en==1)
			dp[1]=v[j].val,j++;
		else
			dp[1]=0;
		for(int i=2; i<=2*1000000; i++)
		{
			if(v[j].en==i)
			{
				dp[i]=max(dp[i-v[j].en-v[j].st]+v[j].val,dp[i-1]);
				j++;
			}
		}
		cout<<dp[2000000]<<endl;
	}
	return 0;
}
