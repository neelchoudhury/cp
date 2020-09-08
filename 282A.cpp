#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n;
	char x,c,v;
	cin>>n;
	int ans=0;
	while(n--)
	{
		cin>>x>>c>>v;
		if(x=='+' or c=='+' or v=='+')
			ans++;
		else
			ans--;
	}
	cout<<ans<<endl;
	return 0;
}
