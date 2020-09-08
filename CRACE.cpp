#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		if(n%2)
			cout<<"JENNY"<<endl;
		else
			cout<<"JACK"<<endl;
	}
	return 0;
}
