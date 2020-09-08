#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll gcd(ll x, ll y)
{
	ll r=x%y;
	while(r!=0)
	{
		x=y;
		y=r;
		r=x%y;
	}
	return y;
}

int main()
{
	ll a,b;
	scanf("%I64d %I64d",&a,&b);
	ll g,m;
	g=gcd(a,b);
	m=min(a,b);
	//cout<<m<<"  "<<g<<endl;
	if(g==1 and m!=g)
		printf("%I64d\n", m-1);
	else if(m==g and g==1)
		printf("%I64d\n", max(a,b));
	if(m==g)
	{
		printf("%I64d\n", max(a,b)/m-1);

	}
	else
	{
		printf("%l64d\n",abs(a-b)/g-1 );
	}
	return 0;	
}
