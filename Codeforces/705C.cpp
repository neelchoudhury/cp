#include <bits/stdc++.h>
#define ll long long int

using namespace std;

queue<ll> app[300030];
queue<pair<ll,ll> > notif;
bool mark[300030];

int main()
{
	ios_base::sync_with_stdio(false);
	memset(mark,0,sizeof(mark));
	ll n,q, ch,x;
	ll ans=0,del=0,k=1;
	cin>>n>>q;
	for(ll i=1; i<=q; i++)
	{
		cin>>ch>>x;
		if(ch==1)
		{
			app[x].push(i);
			notif.push(pair<ll,ll>(i,k));
			ans++;
			k++;
		}
		else if(ch==2)
		{
			 while(!app[x].empty())
			 {
			    if(!mark[app[x].front()])
			    {
			 	    ans-=1;
			 	    mark[app[x].front()]=1;
			    } 
			 	
			 	app[x].pop();
			 }
		}
		else if(ch==3)
		{
		    ll tmp=0;
			while(!notif.empty() and notif.front().second<=x)
			{
				ll q=notif.front().first;
				ll w=notif.front().second;
				notif.pop();
				if(!mark[q])
				{
					mark[q]=1;
					//app[w].pop();
					tmp++;
					ans-=1;
				}
				
			} 
		} 
		cout<<ans<<endl;
	}
	return 0;
}