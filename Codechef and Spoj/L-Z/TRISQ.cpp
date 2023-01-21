#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int b=(n-2)/2;
		int x=b*(b+1)/2;
		cout<<x<<endl;
	}
	return 0;
}
