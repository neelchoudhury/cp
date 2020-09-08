#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,a=1234567, b=123456,c=1234;
	cin>>n;
	ll f=0;
	for(ll i=0;i<=1000; i++)
	{
		for(ll j=0; j<=10000; j++)
		{
			if(n>=(i*a + j*b) and (n-(i*a + j*b))%c==0)
			{
				f=1;
				//cout<<(i*a + j*b)<<" "<<i<<" "<<j<< " "<<(n-i*a - j*b)<<endl;
				break;
			}
		}
		if(f==1)
			break;
	}
	if(f==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
