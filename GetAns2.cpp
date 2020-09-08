#include<iostream>
#include<cmath>
#define ll long long int
#define MOD 1000000007LL

using namespace std;

ll getans(ll n)
{
	ll res=n+1;
	if(n>1)
	{
		if(n==2)
		{
			return res;
		}	
		else
		{
			for(ll i=3; i<=n;++i)
			{
				if(res*2>=MOD)
				{
					res=(res%MOD)*2;
					cout<<"Greater than mod"<<endl;
				}
				else
				{
					res*=2;
				}
			}
		}
		return res;
	}
	else
		return n;
}

int main()
{
	int t;
	ll n;
	int i=1;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<"Case "<<i<<": "<<getans(n)<<endl;
		i++;
	}
}
