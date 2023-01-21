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
		vector<ll> s;
		for(ll i=0;i<m; i++)
			scanf("%lld", &a), s.push_back(a);
		
		sort(s.begin(), s.end());
		ll ind=0;
		vector<ll> q;
		vector<ll> w;
		//s.erase(0);
		ind++;
	//	cout<<s[ind]<<endl;
		q.push_back(s[ind]);
		w.push_back(s[ind]);
		//s.erase(0);
		ind++;
		if(s.size()>2)
		{
		q.push_back(s[ind]);
		w.push_back(s[ind]);
		w.push_back(q[0]+q[1]);
		}
		//s.erase(0);
		ind++;
	//	cout<<q.size()<<endl;
	//	cout<<
	int z=0;
		while(q.size()!=n)
		{
			int flag=0;
			for(int i=z; i<w.size(); i++)
			{
				 if(s[ind]==w[i])
				 {
				 	flag=1;
				 	break;
				 }
			}	
			if(flag==0)
			{
				ll as=s[ind];
				q.push_back(as);
				w.push_back(as);
				z=w.size(); 
				for(int i=0;i<z-1; i++)
				{
					w.push_back(w[i]+w[z-1]);	
				}
			}
			//s.erase(0);
			ind++;
		}
		for(int i=0; i<n; i++)
		{
			printf("%lld ", q[i]);
		}
		cout<<endl;
	}
	return 0;
} 
