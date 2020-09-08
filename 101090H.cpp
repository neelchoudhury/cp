#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> v;
ll a[100010];

int main()
{
	ll k;
	string s;
	cin>>k;
	cin>>s;
	for(ll i=0; i<s.length(); i++)
	{
		if(s[i]=='1')
		{
			v.push_back(i);
		}
	}
	for(ll i=0; i<s.length(); i++)
	{
		a[i]=-1;
	}
	for(ll i=0; i<v.size(); i++)
	{
		if(v[i]==0)
		{
			a[v[i]]=v[i];
		}
		else
		{
			if(a[(v[i]-1)%k]!=-1)
			{
				cout<<a[(v[i]-1)%k]+1<<" "<<v[i]+1<<endl;
				return 0;
			}
			a[v[i]%k]=v[i];
		}
	}
	cout<<"0 0"<<endl;
	return 0;
}
