#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

int main()
{
	ll t;
	string a="",b="";
	cin>>t;
	while(t--)
	{
		cin>>a;
		cin>>b;
		ll i=0,j=0;
		ll f=0;
		for( i=0; i<b.length() and j<a.length(); )
		{
			if(a[j]==b[i])
			{
				j++;
				i++;
			}
			else
			{
				if(j>0 and a[j]==a[j-1])
				{
					char c=a[j-1];
					while(a[j]==c)
					{
						j++;
					}
				}
				else
				{
					if(j==a.length()-1)
					{
						f=1;
						break;
					}
					else if(a[j]!=a[j+1])
					{
						f=1;
						break;
					}
					else if(a[j]==a[j+1])
					{
						j+=2;
					}
				}
			}
		}
		if(f==1)
			cout<<"NO"<<endl; 
		else
		{
			if(i!=b.length())
				cout<<"NO"<<endl;
			else
			{
				char c=a[j-1];
				for(;j<a.length(); j++)
				{
					if(a[j]!=c)
					{
						f=1;
						break;
					}
				}
				if(f)
					cout<<"NO"<<endl;
				else
					cout<<"YES"<<endl;
			}
		}
	}
	return 0;
}