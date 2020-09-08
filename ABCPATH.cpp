#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[55][55];
vector<pair<ll,ll>> v;

int main()
{
	ll h,w; 
	cin>>h>>w;
	while(h!=0 and w!=0)
	{
		for(ll i=0; i<h; i++)
		{
			for(ll j=0; j<w; j++)
			{
				cin>>a[i][j];
			}
		}
		for(ll i=0; i<h; i++)
		{
			for(ll j=0; j<w; j++)
			{
				v.push_back(pair<ll,ll>(i,j));
				if(j+1>w and a[i][j+1]-a[i][j]==1)
					v.
			}
		}
	}
}
