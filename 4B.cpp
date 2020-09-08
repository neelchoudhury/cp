#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define inf 1e18
#define MOD 1000000007

using namespace std;

ll mini[35],maxi[35];

int main()
{
	ios_base::sync_with_stdio(false);
	ll d,sum;
	cin>>d>>sum;
	ll mins=0;
	ll maxs=0;
	for(ll i=0;i<d;++i)
	{
		cin>>mini[i]>>maxi[i];
		mins+=mini[i];
		maxs+=maxi[i];	
	}	
	if(sum>=mins&&sum<=maxs)
	{
		ll extra=sum-mins;
		for(ll i=0;i<d;++i)
		{
			if(extra-maxi[i]+mini[i]>=0)
			{
				extra-=maxi[i]-mini[i];
				mini[i]+=maxi[i]-mini[i];
			}
			else 
			{
				mini[i]+=extra;
				extra=0;
			}
			if(extra==0)
			break;
		}
		cout<<"YES"<<endl;
		for(ll i=0;i<d;++i)
		cout<<mini[i]<<" ";
		cout<<endl;
	}
	else
	cout<<"NO"<<endl;
	return 0;
}
