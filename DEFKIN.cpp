#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

vector<ll> vh,vw;

int main()
{
	ll t,h,w,n;
	scanf("%lld", &t);
	while(t--)
	{
		vh.clear();
		vw.clear();
		scanf("%lld %lld %lld", &w,&h,&n);
		ll x,y;
		for(int qq=0;qq<n; qq++)
		{
			scanf("%lld %lld", &x, &y);
			vw.pb(x);
			vh.pb(y);
		}
		vh.pb(0),vh.pb(h+1);
		vw.pb(0),vw.pb(w+1);
		sort(vh.begin(),vh.end());
		sort(vw.begin(),vw.end());
		ll ans=h*w;
		ll mh=0,mw=0;
		for(ll i=1; i<vh.size(); i++)
		{
			if(vh[i]-vh[i-1]-1>mh)
				mh=vh[i]-vh[i-1]-1;
		}
		for(ll i=0; i<vw.size(); i++)
		{
			if(vw[i]-vw[i-1]-1>mw)
				mw=vw[i]-vw[i-1]-1;
		}
		if(n>0)
		{
			ans=mh*mw;
		}
		printf("%lld\n", ans);
	}
}
