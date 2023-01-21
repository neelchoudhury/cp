#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 

using namespace std;

map<string, pair<set<ll>, set<ll> > > m;
map<string, pair<set<ll>, set<ll> > >::iterator it, itt;
set<ll> in, out;
set<ll>::iterator ii;

int main()
{
	ll q;
	string ins, s, w;
	ios;
	cin>>q;
	while(q--)
	{
		cin>>ins>>s;
		if(ins == "crt")
		{
			if(m.find(s) == m.end())
			{	
                m.insert({s,{set<ll>{0}, set<ll>{1}}});
				cout<<"+ "<<s<<endl;
			}
			else
			{
				it = m.find(s);
				ii = it->ss.ss.begin();
				it->ss.ff.insert(*ii);
				if(it->ss.ff.find(*ii + 1)==it->ss.ff.end() && it->ss.ss.find(*ii + 1)==it->ss.ss.end() )
				{
					it->ss.ss.insert(*ii + 1);
				}
				ll num = *ii;
				if(num != 0)
					cout<<"+ "<<s<<"("<<*ii<<")"<<endl;
				else
					cout<<"+ "<<s<<endl;
				it->ss.ss.erase(ii);
			}
		}
		else if(ins == "del")
		{
			
			ll l = s.length(), num = 0;
			if(l>3)
			{
				if(s[l-1] == ')' )
				{
					ll j = s.find('(');
					for(ll k = j+1; k<l-1; k++)
					{
						num = num*10 + s[k] - '0';
					}
					s.erase(s.begin() + j, s.end());
				}
			}
			it = m.find(s);
			ii = it->ss.ff.find(num);
			it->ss.ss.insert(*ii);
			if(*ii != 0)
				cout<<"- "<<s<<"("<<num<<")"<<endl;
			else
				cout<<"- "<<s<<endl;
			it->ss.ff.erase(ii);
		}
		else
		{
			cin>>w;
			ll l = s.length(), num = 0;
			if(l>3)
			{
				if(s[l-1] == ')' )
				{
					ll j = s.find('(');
					for(ll k = j+1; k<l-1; k++)
					{
						num = num*10 + s[k] - '0';
					}
					s.erase(s.begin() + j, s.end());
				}
			}
			it = m.find(s);
			ii = it->ss.ff.find(num);
			it->ss.ss.insert(*ii);
			if(*ii != 0)
				cout<<"r "<<s<<"("<<num<<") ";
			else
				cout<<"r "<<s<<" ";
			it->ss.ff.erase(ii);

			cout<<"-> ";

			if(m.find(w) == m.end())
			{	
                m.insert({w,{set<ll>{0}, set<ll>{1} }});
				cout<<w<<endl;
			}
			else
			{
				it = m.find(w);
				ii = it->ss.ss.begin();
				it->ss.ff.insert(*ii);
				if(it->ss.ff.find(*ii + 1)==it->ss.ff.end() && it->ss.ss.find(*ii + 1)==it->ss.ss.end() )
				{
					it->ss.ss.insert(*ii + 1);
				}
				ll num = *ii;
				if(num != 0)
					cout<<w<<"("<<*ii<<")"<<endl;
				else
					cout<<w<<endl;
				it->ss.ss.erase(ii);
			}
		}
	}
	return 0;
}