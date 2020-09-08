#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

queue<pair<ll,ll> > q,w;

int main()
{
	ll n,x,y;
	cin>>n>>x;
	for(ll i=0; i<n; i++)
	{
		cin>>y;
		q.push({y,i});
	}
	for(ll i=0;i<x; i++)
	{
		ll j=0;
		ll ind=0;
		ll val=0;
		while(j<x and  !q.empty())
		{
			j++;
			 //cout<<"bing  "<<ind<<endl;
			if(q.front().ff>=val)
			{
				if(q.front().ff>val)
				{
					val=q.front().ff;
					ind=q.front().ss;
				}
				else
				{
					if(q.front().ss<ind)
					{
						val=q.front().ff;
						ind=q.front().ss;	
					}
				}
			}
			w.push(q.front());
			q.pop();
		}
		// cout<<w.size()<<" sszz"<<endl;
		while(!w.empty())
		{
			//cout<<

			if(!(w.front().ff==val and w.front().ss==ind))
				q.push({max(w.front().ff-1,(ll)0),(ll)w.front().ss});
			w.pop();
		}
		cout<<ind+1<<" ";
	}
	cout<<endl;
	return 0;
}