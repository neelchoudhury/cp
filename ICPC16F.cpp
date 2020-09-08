#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define sc(a) scanf("%lld", &a)
#define pr(a) printf("%lld\n", a)
#define pb push_back
#define ff first
#define ss second 
#define dbg(x)   cout<<#x<<"="<<x<<endl

using namespace std;

int main()
{
	ll t,n,m,d,D;
	sc(t);
	while(t--)
	{
		sc(n);sc(m);sc(d);sc(D);
		if(m<d*n or m>D*n)
			cout<<-1<<endl;
		else
		{
			ll cnt=0;
			ll f=0;
			for(ll i=1; i<=n; i++)
			{
				for(ll j=0; j<n; j++)
				{
					if(cnt<=m)
					{
						cout<<(j+i)<<" "<<(j%n+1)<<endl;
						cnt++;
					}
					if(cnt==m)
					{
						f=1;
						break;
					}
				}
				if(f==1)
				{
					break;
				}
			}
		}
	}
	return 0;
}