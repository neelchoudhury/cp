#include<bits/stdc++.h>
#define ll long long int

ll modulo(ll a,ll b,ll c)
{
    long long x=1,y=a; // long long is taken to avoid overflow of intermediate results
    while(b > 0){
        if(b%2 == 1){
            x=(x*y)%c;
        }
        y = (y*y)%c;  
        b /= 2;
    }
    return x%c;
}

using namespace std;

int main()
{
	ll t,m,n,q;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld", &n, &m, &q);
		ll a[n+5];
		memset(a,0,sizeof(a));
		a[0]=1;
		for(ll i=1; i<n; i++)
		{
			a[i]=((a[i-1]%m)*(modulo(i+1,i+1,m)%m))%m;
		}
		for(ll i=0; i<n; i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		ll b[n+5];
		memset(b,0,sizeof(b));
		for(ll i=0; i<n; i++)
		{
			b[i]=modulo(a[i],m-2,m);
		}
			for(ll i=0; i<n; i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
		ll r;
		while(q--)
		{
			scanf("%lld", &r);
			ll x=b[r-1];
			ll y=b[n-r-1];
			//x=modulo(a[x-1],m-2,m);
			//y=modulo(a[y-1],m-2,m);
			ll z=((a[n-1]%m)*(x%m)*(y%m))%m;
			printf("%lld\n", z);
		}
		
	}
	return 0;
}
