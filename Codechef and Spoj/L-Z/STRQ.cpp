#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char p[1000001];
	scanf("%s", p);
	ll q;
	cin>>q;
	ll l,r;
	char a,b;
	while(q--)
	{
		ll l,r;
	char a,b;
		cin>>a>>b;
		scanf("%lld%lld", &l,&r);
		//cout<<a<<" "<<b<<" "<<l<<" "<<r<<endl;
		ll s=0,cnt=0;
		for(ll i=l-1; i<=r-1;i++)
		{
			if(p[i]==a)
				cnt++;
			else if(p[i]==b)
				s+=cnt;
		}
		printf("%lld\n",s);
	}
	return 0;
}
