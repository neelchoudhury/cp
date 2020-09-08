#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int n;
	int sum=0;
	cin>>t;
	while(t--)
	{
		int x,y;
		sum=0;
		cin>>n;
		while(n--)
		{
			cin>>x>>y;
			sum+=(x-y);
		}
		cout<<sum<<endl;
	}
	return 0;
}
