#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		cout<<max(x,y)<<" "<<(x+y)<<endl;
	}
	return 0;
}
