#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,m,u=0,s=0,ans=0;
	char c;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		s=0,u=INT_MAX;
		while(n--)
		{
			scanf("%lld %c", &m, &c);
			if(c=='+')
			{
				s+=(m+25);
			}
			else
			{
				u=min(u,s+m+25);
			}
			//cout<<s<<" "<<u<<endl;
		}
		printf("%lld\n", max((ll)0,(u-s) ));
	}
	return 0;
}
