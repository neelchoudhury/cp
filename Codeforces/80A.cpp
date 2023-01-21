#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	int n,m;
	cin>>n>>m;
	for(int i=0; i<15; i++)
	{
		if(a[i]==n)
		{
			if(a[i+1]==m)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
