#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	ll n,s;
	cin>>t;
	while(t--)
	{
		scanf("%lld %lld",&n,&s);
		ll i=1;
		for(;i<=n; i++)
		{
			
			
			if(s%(i)==0 and s/(i)==(n-i+1))
			{
				cout<<s<<" "<<n<<" "<<i<<endl;
				break;
			}
			s-=i;
		}
		printf("%lld\n", (n-i));
	}
	return 0;
}
