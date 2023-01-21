#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string s;
	cin>>s;
	ll cntp=1, cntm=0;
	for(ll i=0; i<s.length(); i++)
	{
		if(s[i]=='+')
			cntp ++;
		if(s[i]=='-')
			cntm--;
	}
}
