#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> v  ;

int main()
{
	ll t,n,a,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1)
		{
			cin>>a;
			v.clear();
			for(ll i=0; i<a; i++)
			{
				cin>>x;
				v.push_back(x);
			}
			reverse(v.begin(),v.end());
			int f=0;
			for(ll i=0; i<a; i++)
			{
				cin>>x;
				if(v[i]!=x)
				{
					f=1;
					
				}
			}
			if(f==1)
				cout<<"No"<<endl;
			else
				cout<<"Yes"<<endl;
		}
	}
	return 0;
}
