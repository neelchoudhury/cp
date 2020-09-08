#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll k,n,m;
	cin>>k;
	while(k--)
	{
		cin>>n>>m;
		if(n==1 or m==1)
		{
			cout<<"No"<<endl;
		}
		else 
		{
			if((n*m)%6==0)
			{
				cout<<"Yes"<<endl;
			}
			else
				cout<<"No"<<endl;
		}
	}
	return 0;
}
