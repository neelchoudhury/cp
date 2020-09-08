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

vector<queue<ll> > v;
ll a[100];

int main()
{
	ll q,x,y;
	char ch;
	
	mem(a);
	cin>>q;
	while(q--)
	{
		cin>>ch;
		if(ch=='E')
		{
			cin>>x>>y;
			// for(int i=1; i<=4; i++)
			// 	cout<<a[i]<<" ";
			// cout<<endl;
			if(a[x]==0)
			{
				//cout<<"w"<<endl;
				queue<ll> q;
				q.push(y);
				v.pb(q);
				a[x]=v.size();
			}
			else
			{
				v[a[x]-1].push(y);
			}
		}
		else
		{
			for(ll i=0; i<v.size(); i++)
			{
				if(v[i].size()!=0)
				{
					ll j=1;
					for( j=1; j<=4; j++)
					{
						//cout<<a[j]-1<<" erer "<<endl;
						if(a[j]-1==i)
						{
							
							cout<<j<<" ";
							break;
						}
						
					}
					cout<< v[i].front()<<endl;
					v[i].pop();
					if(v[i].size()==0)
						a[j]=0;
					break;
				}
			}
		}
		//cout<<v.size()<<" ss"<<endl;
	}
}