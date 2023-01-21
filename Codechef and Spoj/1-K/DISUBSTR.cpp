#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define hash1 first
#define hash2 second
#define pb push_back

using namespace std;

inline ll power(ll a, ll b)
{
	ll ans=1;
	while(b>0)
	{
		if(b&1)
		{
			ans=(ans*a)%MOD;
		}
		a=(a*a)%MOD;
		b=b>>1;
	}
	return ans;
}

string s;
vector<vector<pair<ll,ll>>> v;
vector<pair<ll,ll>> qq;
ll a[1002],b[1002];
map<pair<ll,ll>, ll> m;

int main()
{
	int t;
	ll p=power(31,MOD-2);
	ll q=power(37,MOD-2);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	a[0]=1,b[0]=1;
	for(ll i=1; i<=1001; i++)
	{
		a[i]=((a[i-1]%MOD)*(31))%MOD;
	} 
	for(ll i=1; i<=1001; i++)
	{
		b[i]=((b[i-1]%MOD)*(37))%MOD;
	}
	cin>>t;
	while(t--)
	{ 
		v.clear();
		qq.clear();
		//cin.clear();
		cin>>s;
		ll h1=0,h2=0; 
		for(ll i=0; i<s.length(); i++)
		{
			h1=((h1%MOD*31%MOD)%MOD +s[i]%MOD)%MOD;
			h2=((h2%MOD*37%MOD)%MOD +s[i]%MOD)%MOD;
			//cout<<i<<" "<<h1<<" "<<h2<<endl;
			qq.pb(pair<ll,ll>(h1,h2));
			v.pb(qq);
		//	cout<<i<<" "<<qq[0].hash1<<" "<<qq[0].hash2<<endl;
			qq.clear();
		} 
		//cout<<"vector "<<v.size()<<endl;
		for(ll i=1; i<=s.length(); i++)
		{
			qq.clear();
		//	cout<<"length "<<s.length()<<" "<<i<<endl;
			qq.pb(v[i-1][0]);
		//	cout<<"  "<<i<<" "<<qq[0].hash1<<" "<<qq[0].hash2<<endl;
			h1=qq[0].hash1;
			h2=qq[0].hash2;
			//qq.clear();
			for(ll j=1; j<=s.length()-i; j++)
			{
			//	cout<<"   cute"<<endl;
				h1=(h1 - ((s[j-1]%MOD)*(a[i-1]%MOD))%MOD + MOD )%MOD;
				h1=((h1%MOD)*(31%MOD)%MOD +s[j+i-1]%MOD)%MOD;
				h2=(h2 - ((s[j-1]%MOD)*(b[i-1]%MOD))%MOD + MOD )%MOD;
				h2=((h2%MOD)*(37%MOD)%MOD +s[j+i-1]%MOD)%MOD;
				qq.pb(pair<ll,ll>(h1,h2));//cout<<"qwqw "<<qq.size()<<endl;
			/*	for(ll qqq=0; qqq<qq.size(); qqq++)
					cout<<i<<" "<<qq.size()<<" "<<qqq<<" qqq "<<qq[qqq].hash1<<" "<<qq[qqq].hash2<<endl;
				cout<<"qqqqwwe"<<endl;*/
			 
			}
			if(i!=s.length())
			{
				v[i-1].clear();
				v[i-1]=(qq);
			}
			/*for(ll qqq=0; qqq<v[i-1].size(); qqq++)
					cout<<v[i-1].size()<<" "<<qqq<<" www "<<v[i-1][qqq].hash1<<" "<<v[i-1][qqq].hash2<<endl;
			cout<<"going home"<<endl;*/
		}
		//cout<<v[4]
		 
		for(ll i=0; i<s.length(); i++)
		{
			// cout<<" iii "<<i<<endl;
			for(ll j=0; j<v[i].size(); j++)
			{
			//	cout<<i<<" "<<j<<" "<<v[i][j].hash1<<" "<<v[i][j].hash2<<endl;
				m.insert(make_pair(v[i][j],1));
			//	cout<<m.size()<<endl;
			}
		}
		ll ans=m.size();
		m.clear();
		printf("%lld\n", ans);
	}
	return 0;
}
