#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans=0;
	int bet=0;
	int a,b;
	while(n--)
	{
		cin>>a>>b;
		bet=bet-a+b;
		ans=max(ans,bet);
	}
	cout<<ans<<endl;
	return 0;
}
