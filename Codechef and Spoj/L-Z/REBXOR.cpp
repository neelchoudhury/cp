#include<bits/stdc++.h>
#define ll  long long int

using namespace std;

ll a[400010];
ll v1[400010],v2[400010];

ll check_bit(ll N,int POS){return (N & (1ULL<<POS));}

ll gaussian_elimination(ll v[], ll size)
{
    ll n=size;
    ll ind=0;  // Array index
    for(ll bit=log2(v[0]);bit>=0;bit--)
    {
        ll x=ind;
        while(x<n && check_bit(v[x],bit)==0)
          x++;
        if(x==n)
          continue; // skip if there is no number below ind where current bit is 1
        swap(v[ind],v[x]);
        for(ll j=0;j<n;j++)
        {
            if(j!=ind&&check_bit(v[j],bit))
                v[j]^=v[ind];
        }
        ind++;
    }
    ll ans=v[0];
    for(ll i=1;i<n;i++)
      ans=max(ans,ans^v[i]);
    return ans;
}

int main()
{
	ll n;
	scanf("%lld", &n);
	memset(a,0,sizeof(a));
	ll ans=0;
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
	for(ll i=1;i<n-1; i++)
	{
		for(ll j=0; j<i; j++)
			v1[j]=-a[j];
		for(ll j=i; j<n; j++ )
			v2[j-i]=-a[j];
		/*for(ll j=0; j<v1.size(); j++)
			cout<<v1[j]<<" ";
		cout<<endl;
		for(ll j=0; j<v2.size(); j++)
			cout<<v2[j]<<" ";
		cout<<endl;*/
		sort(v1, v1+i);
		sort(v2, v2+n-i);
		for(ll j=0; j<i; j++)
			v1[j]=-v1[j];
		//cout<<endl;
		for(ll j=0; j<n-i; j++)
			v2[j]=-v2[j];
		//cout<<endl;
		
		ll max1=gaussian_elimination(v1,i);
		ll max2=gaussian_elimination(v2,n-i);
		ans=max(ans,max1+max2);
		 
	}
	printf("%lld\n", ans);
	return 0;
}
