#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define pr(n) printf("%lld\n", n)

using namespace std;

int main()
{
	ll t,r,c,x,y;
	sc(t);
	for(ll ii=1; ii<=t; ii++)
	{
		cout<<"Case #"<<ii<<": ";
		sc(r); sc(c);
		ll ans=0;
		if(r%3==0  )
			x=((r/3))*2;
		if(  r%3==2)
			x=((r/3)+1)*2;
		if(r%3==1)
			x=((r/3)*2+1);
		if(  c%3==2)
			y=((c/3)+1)*2;
		if(c%3==0  )
			y=((c/3))*2;
		if(c%3==1)
			y=((c/3)*2+1);
		// cout<<x<<" "<<y<<endl;
		ans+=x*y;
		for(ll i=1; i<=r; i++)
		{
			for(ll j=1; j<=c; j++)
			{
				if(i%3==0 and j%3==0)
					ans++;
			}
		}
		pr(ans);
	}
	return 0;
}