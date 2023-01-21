#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n;
	int vas,pet,ton;
	int ans=0;
	cin>>n;
	while(n--)
	{
		cin>>vas>>pet>>ton;
		if(vas+pet+ton>=2)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}
