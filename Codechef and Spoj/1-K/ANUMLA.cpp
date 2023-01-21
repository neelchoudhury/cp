#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll m=1<<n;
		ll a;
		multiset<ll> s;
		for(ll i=0;i<m; i++)
			scanf("%lld", &a), s.insert(a);
		
		sort(s.begin(),s.end());
		vector<ll> q;
		vector<ll> w;
		s.erase(0);
		q.push_back(*(s.begin()));
		w.push_back(*(s.begin()));
		s.erase(0);
		q.push_back(*(s.begin()));
		w.push_back(*(s.begin()));
		w.push_back(q[0]+q[1]);
		s.erase(0);
		int ind=0;
		while(q.size()!=n)
		{
			int flag=0;
			for(int i=0; i<w.size(); i++)
			{
				 if(*(s.begin())==w[i])
				 {
				 	flag=1;
				 	break;
				 }
			}	
			if(flag==0)
			{
				ll as=*(s.begin());
				q.push_back(as);
				w.push_back(as);
				int z=w.size(); 
				for(int i=0;i<z-1; i++)
				{
					w.push_back(w[i]+w[z-1]);	
				}
			}
			s.erase(0);
		}
		for(int i=0; i<n; i++)
		{
			printf("%lld ", q[i]);
		}
		cout<<endl;
	}
	return 0;
}
