#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,x,y;
	ll ans=0,ans2=0;
	char ch;
	cin>>n>>x;
	ans=x;
	while(n--)
	{
		cin>>ch>>y;
		if(ch=='+')
			ans+=y;
		else
		{
			if(ans>=y)
			{
				ans-=y;
			}
			else
			{
				ans2++;
			}
		}
	}
	cout<<ans<<" "<<ans2<<endl;
	return 0;
}
