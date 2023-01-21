#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false);

using namespace std;

int main()
{
	ios;
	ll n;
	cin>>n;
	if(n%2)
	{
		cout<<9<<" "<<n-9<<endl;
	}
	else
	{
		cout<<8<<" "<<n-8<<endl;
	}
	return 0;
}
