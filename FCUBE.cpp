#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool cr(ll n)
{
	int flag=0;
	for(int i=pow(n,.25); i<=sqrt(n);i++)
	{
		cout<<i<<" pow "<<pow(i,3)<<" n "<<n<<" "<<(pow(i,3)==n)<<endl;
		if(pow(i,3)==n)
		{
			cout<<" sat ";
			return true;
		}
	}
	return false;
}

int main()
{
	int t;
	ll s;
	
	cin>>t;
	while(t--)
	{
		s=1;
		int n;
		cin>>n;
		if(n==1)
		{
			scanf("%lld", &s);
		 
			int i=2;
			ll b=s;
			while(cbrt(b)!=(int)cbrt(b))
			{
				b=b+s;
			}
			printf("%lld\n", b);
		}
	}
	return 0;
}
