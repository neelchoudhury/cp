#include<bits/stdc++.h>
#define ll long long int

using namespace std;

map<ll, pair<ll, ll> > m;
map<ll, pair<ll,ll> >:: iterator ii;

void add(ll u,ll v, ll val)
{
	//cout<<"u "<<u<<" v "<<v<<endl;
	ii=m.find(u);
	if(ii==m.end())
	{
		m.insert(make_pair(u,make_pair(u/2,val)));
		//cout<<"u "<<u<<" "<<((ii->second).second)<<endl;
	}
	else
	{
		((ii->second).second)+=val;
		//cout<<"u "<<u<<" "<<((ii->second).second)<<endl;
	}
	//ii=m.find(u);
	//cout<<"u "<<u<<" "<<((ii->second).second)<<endl;
	if(u/2!=v)
	{
		/*ii=m.find(v);
		if(ii==m.end())
		{
			m.insert(make_pair(v,make_pair(v/2,val)));
			//cout<<"v "<<v<<" "<<((ii->second).second)<<endl;
		}
		else
		{
			((ii->second).second)+=val;
			//cout<<"v "<<v<<" "<<((ii->second).second)<<endl;
		}
		ii=m.find(v);
		cout<<"v "<<v<<" "<<((ii->second).second)<<endl;*/
		u=u/2;
		ll mi=min(u,v);
		ll ma=max(u,v);
		add(ma,mi,val);
	}
}

ll find(ll u, ll v)
{
	ll ans=0;
	//cout<<"u "<<u<<" v "<<v<<endl;
	ii=m.find(u);
	//cout<<"u "<<u<<" "<<((ii->second).second)<<endl;
	if(ii==m.end())
	{
		m.insert(make_pair(u,make_pair(u/2,0)));
	}
	else
	{
		ans+=((ii->second).second);
	}
	if(u/2!=v)
	{
		/*ii=m.find(v);
		if(ii==m.end())
		{
			m.insert(make_pair(v,make_pair(v/2,0)));
		}
		else
		{
			ans+=((ii->second).second);
		}*/
		u=u/2;
		ll mi=min(u,v);
		ll ma=max(u,v);
		return ans+find(ma,mi);
	}
	else
	{
		return ans;
	}
}

int main()
{
	ll q,ch,u,v,w;
	cin>>q;
	while(q--)
	{
		cin>>ch;
		if(ch==1)
		{
			cin>>u>>v>>w;
			ll mi=min(u,v);
			ll ma=max(u,v);
			add(ma,mi,w);
		}
		else if(ch==2)
		{
			cin>>u>>v;
			ll mi=min(u,v);
			ll ma=max(u,v);
			cout<<find(ma,mi)<<endl;
		}
	}
	return 0;
}
