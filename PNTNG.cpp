#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,m,h;
	
	scanf("%lld %lld%lld", &n,&m,&h);
	pair<ll,ll> t[h];
	for(ll i=0; i<h; i++)
		
		scanf("%lld %lld",&t[i].second,&t[i].first);
 
	sort(t,t+h);
	int s=0;
	 
		ll cnt=0;
		ll ans=0;
		for(ll i=0; i<h;i++)
		{
			if (cnt + t[i].second < n * m)
            ans += t[i].second * t[i].first, cnt += t[i].second;
        else
        {
            ans += (n * m - cnt) * t[i].first;
            cout << ans << "\n";
            return 0;
        }
		}
 	cout<<"Impossible"<<endl;
				
	return 0;	
}
