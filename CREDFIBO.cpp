#include<bits/stdc++.h>
#define ll long long int
#define N 100010

using namespace std;

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}

ll a[N+10]; 

int main()
{
	a[0]=0;
	for(int i=1; i<=N; i++)
	{
		 a[i]=a[i-1];
		 if(i%6==4)
		 a[i]++;
	}
	/*for(int i=1; i<=20; i++)
		cout<<a[i]<<" ";
	cout<<endl;*/
	ll q;
	scanf("%lld", &q);
	ll l,r;
	while(q--)
	{
		scanf("%lld %lld", &l, &r);
		ll ans;
		ans=a[r]-a[l-1];
	 ans=power(3,ans,4);
		printf("%lld\n", ans);
	}
	return 0;
}
