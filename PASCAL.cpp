#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll a[1010][1010];
ll s[1010],s1[1010];

int main()
{
	memset(a,0,sizeof(a));
	memset(s,0,sizeof(s));
	memset(s1,0,sizeof(s1));
	a[1][1]=1;
	//a[1][2]=1;
	for(int i=2; i<=1000;i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(j==1 or j==i)
				a[i][j]=1;
			else
				a[i][j]=(a[i-1][j-1]%MOD+a[i-1][j]%MOD)%MOD;
		}
	}
	for(int i=1; i<=1000; i++)
	{
		for(int j=1; j<=i; j++)
			s[i]=(s[i]%MOD+a[i][j]%MOD)%MOD;
	}
	/*for(int i=1; i<=7; i++)
	{
		for(int j=1; j<=i; j++ )
			cout<<a[i][j]<<"   ";
		cout<<endl;
	}*//*
	for(int i=0; i<=25; i++)
		cout<<s[i]<<endl;*/
	ll t,x,y;
	scanf("%lld", &t);
	while(t--)
	{
		for(int i=0; i<=1000; i++)
			s1[i]=s[i];
		scanf("%lld %lld",&x, &y );
		ll q;
		for(int i=x; i<=1000; i++)
		{
			s1[i]=(s1[i]%MOD - (a[x][y]%MOD*s[i-x+1]%MOD)%MOD +  MOD)%MOD;
		}
		/*for(int i=1; i<=6; i++)
		cout<<s1[i]<<endl;
		cout<<endl;*/
		//s[x]=(s[x]-a[x][y]+MOD)%MOD;
		scanf("%lld", &q);
		while(q--)
		{
			ll m;
			scanf("%lld", &m);
			printf("%lld\n", s1[m]);
		}
	//	s[x]=(s[x]+a[x][y])%MOD;
	}
	return 0;
}
