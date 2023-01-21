#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{

	ll a,b;
	cin>>a>>b;
	if(a>b)
		cout<<"Alice"<<endl;
	else if(b>a)
		cout<<"Bob"<<endl;
	else
		cout<<"Math"<<endl;
	return 0;
}