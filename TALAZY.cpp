#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,b,m;
	scanf("%lld", &t);
	while(t--)
	{
	scanf("%lld %lld %lld", &n, &b, &m);
	ll cnt=(ll)log2((n+1));
	if(n>pow(2,cnt))
	{
		cnt+=2;
	}
	else
		cnt+=1;
	ll ans=0;
	ll k=n;
	while(n>1)
	{
		k=n;
			n=(n+(n%2))/2;
		
		ans+=(n)*m;
		n=k-n;
		//cout<<n<<" "<<ans<<endl;
		m*=2;
		 
			ans+=b;
	 
	}
	ans+=n*m;
	printf("%lld\n",ans);
	}
	return 0;
}
