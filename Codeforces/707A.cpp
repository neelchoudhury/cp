#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

//char a[110][110];

int main()
{
	ll n,m;
	char ch;
	ll cnt1=0;
	cin>>n>>m;
	for(ll i=0; i<n; i++)
	{
		 for(ll j=0; j<m; j++)
		 {
		 	cin>>ch;
		 	if(ch=='B' or ch=='W' or ch=='G')
		 	{
		 		cnt1++;
			 }
		 }
	}
	if(cnt1==n*m)
	{
		cout<<"#Black&White"<<endl;
	}
	else
	{
		cout<<"#Color"<<endl;
	}

	return 0;
}
