#include <bits/stdc++.h>
#define ll long long int

using namespace std;

bool prime[1150];
 
void pr()
{ 
	for(ll i=0;i<=1040; i++)
		prime[i]=1;
	prime[1]=0;
	prime[0]=0;
	prime[2]=1;
	for(ll i=2; i<=(1040); i++)
	{
		if(prime[i])
		{
			for(ll j=2*i; j<=i*i; j+=i)
			{
				prime[j]=0;
			}
		}
	}
}

int main()
{
	pr();
	ios_base::sync_with_stdio(false);
	string s;
	while(cin>>s)
	{
		int sum=0;
		for(ll i=0; i<s.length(); i++)
		{
			if(s[i]<'a')
			{
				sum+=(s[i]-'A'+27);
			}
			else
			{
				sum+=(s[i]-'a'+1);
			}
		}
		if(prime[sum])
		{
			cout<<"It is a prime word."<<endl;
		}
		else
		{
			cout<<"It is not a prime word."<<endl;
		}
	}
	return 0;
}
