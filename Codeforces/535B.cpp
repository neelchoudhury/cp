#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	int a[9];
	scanf("%I64d", &n);
	int i;
	for( i=0;i<9; i++)
	{
		a[i]=0;
	}
	for( i=8; i>=0 and n>0; i--)
	{
		a[i]=n%10;
		n/=10;
	}
	i++;
	int d=8-i+1;
	//cout<<d<<" d";
	ll f=0;
	for(i=1;i<d;i++)
	{
		f+=pow(2,i);
	}
	ll l=0;
	for(i=8; i>=(9-d); i--)
	{
		if(a[i]==7)
			l+=pow(2,(9-i-1));
	}
	l+=(f+1);
	printf("%I64d\n", l);
	return 0;
}
