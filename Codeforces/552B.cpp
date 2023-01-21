#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,m;
	cin>>n;
	m=n;
	ll s=0;
	ll x=10;
	ll y=9;
	ll i=1;
	ll flag=0;
	while(n>=x)
	{
		s+=i*(x-x/10);
		//m=m-x;
		//cout<<s<<" "<<(i*(x-x/10))<<endl;
		x=x*10;i++;
		flag=1;
		
	}
	
	if(n!=x/10)
	{
		
		if(flag==0)
			s+=i*m;
		else
			m=m-x/10,s+=(m+1)*i;	
		 //s+=(i*((flag==0?m:m+1)));
	}
	else
		 s+=i;
	cout<<s<<endl;
	//printf("%lld",s);
	return 0;
	
}
