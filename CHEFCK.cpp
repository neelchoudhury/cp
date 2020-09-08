#include<bits/stdc++.h>
#define ll long long int
#define NUM 10000004
#define MOD 1000000007

using namespace std;

int main()
{
	ll n,k,q;
	ll a, b, c, d, e, f, r, s, t, m, a1;
	ll  L1, La, Lc, Lm, D1, Da, Dc, Dm;
	ll A[NUM];
	
	ll Q[10005][2];
	A[0]=a1;
	
	scanf("%lld%lld%lld", &n, &k, &q);
	scanf("%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld",&a, &b, &c, &d, &e, &f, &r, &s, &t, &m, &a1 );
	scanf("%lld%lld%lld%lld%lld%lld%lld%lld",&L1, &La, &Lc, &Lm, &D1, &Da, &Dc, &Dm );
	
	for(ll x=1; x<n; x++)
	{
	
		if((int)pow(t,x)% s  <= r)       	
			A[x] = (a*(int)pow(A[x-1],2) + b*A[x-1] + c) % m;
		else
			A[x] = (d*(int)pow(A[x-1],2) + e*A[x-1] + f) % m;
	}
	
	for(ll i=0;i<q; i++)
	{
	
		L1 = (La * L1 + Lc) % Lm;
		D1 = (Da * D1 + Dc) % Dm; 
		Q[i][0] = L1 + 1;
		Q[i][1] = min(Q[i][0] + k - 1 + D1, n);
	}
	ll min=0;
	ll sum=0,p=1;
	for(ll i=0; i<q; i++)
	{
		min=Q[i+1][0];
		for(ll j=Q[i][0]+1; j<=Q[i][1]; j++)
		{
			if(A[j]<min)
				min=A[j];	
		}
		sum+=min;
		p=(p*min)%MOD;
	}
	printf("%lld %lld\n", sum,p);
	return 0;
}
