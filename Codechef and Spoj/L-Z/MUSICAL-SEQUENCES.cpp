#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll t,n,m,z;
	scanf("%lld", &t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		ll ak=0;
		scanf("%lld %lld %lld", &n,&m, &z);
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
			if(n%2==0)
				ak=(ak%m + ((a[i]%m)*(((ll)pow(-1,i+1)+m)%m)) + m)%m;
			else
				ak=(ak%m + ((a[i]%m)*(((ll)pow(-1,i)+ m)%m)%m) + m)%m;
		//	cout<<"ak  "<<ak<<endl;
		}
		a[n]=ak;
		ll r=z%(n+1);
		ll q=z/(n+1);
		//cout<<ak<<"  ak"<<endl;
		ll ans=0;
		if(n%2==0)
			ans=((a[r]%m)*(((ll)pow(-1,q%2)+m)%m)+m)%m;
		else
			ans=((a[r]%m) )%m;
		printf("%lld\n", ans);
	}
	return 0;
}
