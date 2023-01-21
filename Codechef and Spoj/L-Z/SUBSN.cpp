#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
 
using namespace std;
 
string s,ss;
vector<ll> a[27];
vector<ll>::iterator it;
 
int main()
{
	ll t,q;
	scanf("%lld", &t); 
	cin.ignore();
	for(ll ii=1; ii<=t; ii++)
	{
		printf("Case %lld:\n", ii);
		for(ll i=0;i<27; i++)
		{
		    a[i].clear();
		}
		getline(cin,s,'\n');
		cin.clear(); 
		for(ll j=0; j<s.length(); j++)
		{ 
		    a[s[j]-'a'].push_back(j);
		} 
		scanf("%lld", &q); 
		cin.ignore(100000,'\n');
		
		while(q--)
		{
			getline(cin,ss,'\n'); 
			cin.clear(); 
			if(ss.size()==0)
				printf("YES\n");
			else if(ss.size()>s.size())
			    printf("NO\n");
			else
			{ 
				int f=0;
				ll val=-1;
				for(ll i=0; i<ss.size(); i++)
				{
				    it=upper_bound(a[ss[i]-'a'].begin(),a[ss[i]-'a'].end(), val);
					if(it==a[ss[i]-'a'].end())
					{
						printf("NO\n");
						f=1;
						break;
					}
					val=*it; 
				} 
				if(f==0)
					printf("YES\n");
			}
		}
	}
	return 0;
}
