#include<bits/stdc++.h>
#define ll long long int
#define N 5000001

using namespace std;

int main()
{
	bool a[N];
	for(ll i=0; i<N; i++)
		a[i]=true;
	a[0]=false;
	a[1]=false;
	a[2]=true;
	int f=0;
	for(ll i=1; i<sqrt(N);i++)
	{
		 if(a[i])
		 {
		 for(ll j=i+i; j<N;j+=i)
		 	a[j]=false;
		 }
	}
	 
	/*for(int i=0; i<100; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	 
	cout<<endl;*/
	ll t;
	ll m,n;
	scanf("%lld", &t);
	ll s=0;
	while(t--)
	{
		s=0;
		scanf("%lld %lld", &m, &n);
		for(ll i=m; i<=n; i++)
		{
			if(a[i])
				s+=i;
		}
		printf("%lld\n", s );
		
	}
	return 0;
	
}

