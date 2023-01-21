#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

int main()
{
	ll n,h,x;
	ll ans=0;
	cin>>n>>h;
	while(n--)
	{
		cin>>x;
		if(x>h)
		{
			ans+=2;
		}
		else
		{
			ans+=1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
