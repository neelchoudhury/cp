#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,m,t,x1,x2,x3,y1,y2,y3;
	cin>>n>>m;
	cin>>t;
	while(t--)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int f=0;
		if((x1<x2+abs(y1-y2) && x1<x3+abs(y1-y3)) || (m-x1<m-x2+abs(y1-y2) && m-x1<m-x3+abs(y1-y3)))
   cout<<"YES"<<endl;
  else if((y1<y2+abs(x1-x2) && y1<y3+abs(x1-x3)) || (n-y1<n-y2+abs(x1-x2) && n-y1<n-y3+abs(x1-x3)))
   cout<<"YES"<<endl;
  else
   cout<<"NO"<<endl;
	}
}
