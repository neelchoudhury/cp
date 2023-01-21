#include<bits/stdc++.h>
#define ll long long int
#define N 10004
#define MOD 1000000007

using namespace std;

int main()
{
	ll t,n,i,j,k,p,s,tmp;
	ll a[N];
	ll min=0, max=0, term=0;
	scanf("%lld", &t);
	while(t--)
	{
		min=0,max=0,t=0;
		s=0;
		tmp=0;
		scanf("%lld", &n);
		for(i=0;i<n;i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		//cout<<"loop1"<<endl;
	 	for( i=1; i<n; i++)
	 	{
	 		term+=(int)pow(2,i-1)%MOD;
	 		//cout<<term<<"  term"<<endl;
	 		max+=(a[i]*term)%MOD;
	 	}
	 	term =0;
	 	//cout<<"loop2"<<endl;
	 	for(i=n-2; i>=0; i--)
	 	{
	 		term+=(int)pow(2,n-i-2)%MOD;
	 		//cout<<term<<"  term"<<endl;
	 		min+=(a[i]*term)%MOD;
	 	}
	 	s=(max-min)%MOD;
		printf("%lld\n", s);
		
	}
	return 0;
}
