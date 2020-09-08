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

vector<ll> v;
stack<ll> s;

int main()
{
	ll n,q,x;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		v.pb(x);
	}
	string a="";
	cin>>q>>x;
	int cnt=0;
	int ind=0;
	for(int i=0; i<q; i++)
	{
		a="";
		cin>>a;
		if(a=="Harry")
		{
			s.push(v[ind]);
			cnt+=v[ind];
			ind++;
		}
		else
		{
			if(s.size()!=0)
			{
				cnt-=s.top();
				//cout<<s.top();
				s.pop();
			}
		}

		//cout<<cnt<<endl;
		if(cnt==x)
		{
			//cout<<"bb "<<endl;
			cout<<s.size()<<endl;
			break;
		}
		if(ind>n-1)
		{
			cout<<-1<<endl;
			break;
		}
	}
	return 0;
}