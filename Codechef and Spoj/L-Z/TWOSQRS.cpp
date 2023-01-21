#include<bits/stdc++.h>
#define ll long long int
#define N 1000005

using namespace std;

int main()
{
	ll c,x;
	ll a[N];
	for(ll i=0; i<=N; i++)
		a[i]=(ll)pow(i,2);
	scanf("%lld", &c);
	while(c--)
	{
		scanf("%lld", &x);
		ll y,f=0;
		for(ll i=0; x>a[i];i++)
		{
			y=x-a[i];
			long double z=sqrt(y);
			if((z-(ll)z)==0)	
			{
				f=1;
				break;
			}
		}
		if(f==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
