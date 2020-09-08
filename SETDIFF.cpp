#include<bits/stdc++.h>
#define ll long long int
#define N 100004
#define MOD 1000000007
 
using namespace std;
 
ll powr(ll a,ll b)
{
	ll t=1;
	while(b>0){
		if(b&1) t=(t*a)%MOD;
		a=(a*a)%MOD;
		b>>=1;
	}
	return t;
}
 
int main()
{
	ll t,n,i,j,k,p,s;
	ll a[N];
	ll min=0, max=0, term=0;
	scanf("%lld", &t);
	while(t--)
	{
		min=0,max=0 ;
		s=0;
		term=0;
		scanf("%lld", &n);
		for(i=0;i<n;i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
	 	for( i=1; i<n; i++)
	 	{
	 		term=( term%MOD + powr(2,i-1)%MOD )%MOD;
	 		max=( max%MOD + a[i]%MOD*term%MOD)%MOD;
	 		//cout<<a[i]%MOD*term%MOD<<endl;
	 	}
	 	term =0;
	 	//cout<<"loop2"<<endl;
	 	for(i=n-2; i>=0; i--)
	 	{
	 		term=( term%MOD + powr(2,n-i-2)%MOD )%MOD;
	 		min=(min%MOD + a[i]%MOD*term%MOD)%MOD;
	 		//cout<<a[i]%MOD*term%MOD<<endl;
	 	}
	 	s=(max%MOD-min%MOD)%MOD;
	 	//cout<<t<<" t"<<endl;
		printf("%lld\n", s);
 
	}
	return 0;
}
