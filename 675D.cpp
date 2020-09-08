#include<bits/stdc++.h>
#define ll long long int

using namespace std;

map<ll,ll> m;
map<ll,ll>::iterator ii,jj;

int main()
{
	ll n,a;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>a;
		if(i==0)
			m.insert(pair<ll,ll>(a,i));
		else
		{
			m.insert(pair<ll,ll>(a,i));
			ii=m.find(a);
			jj=ii;
			ii++;
			if( ii==m.end() )
			{
				jj--;
				cout<<(jj)->first<<" ";
			}
			else if(jj==m.begin())
			{
				cout<<ii->first<<" ";
			}
			else
			{
				jj--;
				if(jj->second>ii->second)
					cout<<jj->first<<" ";
				else
					cout<<ii->first<<" ";
			}
			
		}
		
	}
	cout<<endl;
	return 0;
}
