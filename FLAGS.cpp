#include<bits/stdc++.h>
#define ll long long int
#define N 100010

using namespace std;

ll a[N][5];

int main()
{
	ll t,n;
	memset(a,0,sizeof(a));
	a[1][0]=0,a[1][1]=0,a[1][2]=0,a[1][3]=0,a[1][4]=0;
	a[2][0]=2,a[2][1]=2,a[2][2]=0,a[2][3]=0,a[2][4]=0;
	for(ll i=3; i<=N; i++)
	{
		a[i][0]=(i*(i-1))+(i*(i-1)*(i-2));
		a[i][1]=a[i][0];
		a[i][2]=(i*(i-1)*(i-2));
		a[i][3]=a[i][2]+(i*(i-1)*(i-2)*(i-3));
		a[i][4]=a[i][3];
	}
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll sum=0;
		for(int i=0; i<5; i++)
			sum+=a[n][i];
		printf("%lld\n", sum);
	}
	return 0;
}
