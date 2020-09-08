#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string s;
	cin>>s;
	cout<<s;
	for(ll i=s.length()-1; i>=0; i--)
		cout<<s[i];
	cout<<endl;
	return 0;
}
