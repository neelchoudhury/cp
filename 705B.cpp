#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,x;
	ios_base::sync_with_stdio(false);
	cin>>n;
	ll cnt=1, sum=0;
	for(int i=0; i<n; i++)
	{
		cnt=i+1; 
		cin>>x;
		sum+=x;
		if((cnt%2)^(sum%2))
		{
			cout<<"1 "<<endl;
		}
		else
		{
			cout<<"2 "<<endl;
		}
	}
	cout<<endl;
	return 0;
}