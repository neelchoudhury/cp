#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	ll n;
	int f=0;
	while(t--)
	{
		f=0;
		scanf("%lld", &n);
		ll m=n;
		while(m>0)
		{
			if(m%2==0)
			{
				f=1;
				break;
			}
			m=m/2;
		}
		if(f==1)
			cout<<-1<<endl;
		else
		{
			if(n==1)
				cout<<2<<endl;
			else
				cout<<(n>>1)<<endl;
		}
	}
	return 0;
}
