#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

vector< pair<ll,ll> > v ;
vector<ll> q;
vector<pair<ll,ll> >::iterator ii;
ll aa[N];

int main()
{
	ios;
	ll n,a,b,k;
	cin>>n>>a>>b>>k;
	ll cnt=0;
	string s="";
	ll i=0;
	cin>>s;
	// cout<<s<<endl;
	for(  i=0; i<n; i++)
	{
		 
		if(s[i]=='1')
		{
			if(i!=0)
			{
				// cout<<cnt<<" "<<i<<endl;
				if(cnt>=b)
					v.pb(pair<ll,ll>(cnt,i-cnt+1));
				cnt=0;
			}
		}
		else
		{
			// cout<<i<<endl;
			cnt++;
		}
	}
	if(s[n-1]=='0' and cnt>=b)
		v.pb(pair<ll,ll>(cnt,i-cnt+1));
	sort(v.begin(),v.end());
	cnt=0;
	cout<<"size "<<v.size()<<endl;
	for(ll i=0; i<v.size(); i++)
		cout<<v[i].ss<<endl;
	cout<<endl;
	mem(aa);
	aa[v.size()-1]=v[v.size()-1].ff/b;
	for(ll i=v.size()-2; i>=0; i--)
	{
		aa[i]=aa[i+1]+v[i].ff/b;
	}
	ll ans=0;
	// for(ll i=0; i<v.size(); i++)
	// {
	// 	if(aa[i]>=a)
	// 	{
	// 		ans+=1;
	// 		q.pb(	v[i].ss+b-(ll)1);
	// 	}
	// }
	// // cout<<q.size()<<endl;
	// // for(ll i=0; i<n; i++)
	// // 	cout<<aa[i]<<" ";
	// // cout<<endl;
	// cout<<ans<<endl;
	// for(ll i=0; i<q.size(); i++)
	// {
	// 	cout<<q[i]<<" ";
	// }
	// cout<<endl;
	return 0;
}