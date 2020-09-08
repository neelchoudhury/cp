#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	string s;
	scanf("%lld", &t);
	while(t--)
	{
		cin>>s;
		for(int i=s.length()-1; i>=0; i--)
			printf("%c",s[i]);
		cout<<endl;
	}
	return 0;
}
