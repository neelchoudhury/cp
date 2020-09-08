//I understood the question wrong,This is no the solution



#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,s=0;
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<n; i++)
		{
			s+=a[i];
		}
		s*=(n*(n-1)/2 + 1);
		cout<<s<<endl;
	}
	return 0;
}
