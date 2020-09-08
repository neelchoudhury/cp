#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll k,n,w;
	cin>>k>>n>>w;
	ll s=((w+1)*w)/2;
	s=s*k;
	s=s-n;
	if(s<0)
		s=0;
	cout<<s<<endl;
	
	return 0;
}
