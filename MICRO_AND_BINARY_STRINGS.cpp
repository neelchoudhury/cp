#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	string s;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		cin>>s;
		ll cnt=0;
		for(ll i=0; i<n; i++)
		{
			if(s[i]=='1')
				cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
