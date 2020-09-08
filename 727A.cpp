#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

vector<ll> v;

int main()
{
	ll a,b;
	ll f=0,cnt=0;
	cin>>a;
	cin>>b;
	v.pb(b);
	while(b>a)
	{
		if(b%2==0)
		{
			b/=2;
			cnt++;
			v.pb(b);
		}
		else
		{
			if(b%10!=1)
			{
				cout<<"NO"<<endl;
				return 0;
			}
			else
			{
				b/=10;
				cnt++;
				v.pb(b);
			}
		}
	}
	if(b==a)
	{
		cout<<"YES"<<endl;
		cout<<v.size()<<endl;
		reverse(v.begin(),v.end());
		for(ll i=0; i<v.size(); i++)
		{
			cout<<v[i];
			if(i!=v.size()-1)
				cout<<" ";
		}
		cout<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}