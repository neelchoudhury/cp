#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	ll n,m,k;
	cin>>n;
	if(n%2)
	{
		m=(n*n-1)/2;
		k=m+1;
	}
	else
	{
		m=(n/2)*(n/2)-1;
		k=m+2;
	}
	if(m<=0 or k<=0)
		cout<<-1<<endl;
	else
		cout<<m<<" "<<k<<endl;
	return 0;
}

