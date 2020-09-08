#include<bits/stdc++.h>
#define ll long long int
#define inf 10e5+7

string s;
//ll b[27];
vector<ll> v,p1,s1;

using namespace std;

int main()
{
	ll t,k;
	scanf("%lld", &t);
	while(t--)
	{
		cin>>s;
		//memset(b,0,sizeof(b));
		scanf("%lld", &k);
		sort(s.begin(), s.end());
		/*for(int i=0; i<n; i++)
			b[i]=-1;*/
		ll cnt=1,j=0;
		for(ll i=1; i<s.length(); i++)
		{
			if(s[i]==s[i-1])
			{
				cnt++;
			}s=
			if(s[i]!=s[i-1] or i==s.length()-1)
			{
				v.push_back(cnt);
				cnt=1;
			}
		}
		sort(v.begin(),v.end());
		ll ans=inf;
		
		ll sum1=0,sum2=0,n1=0,n2=0;
		for(ll i=0;i<v.size()-1; i++)
		{
			if(v[i]==v[i+1])
			{
				n1++;
				s1.push_back(0);
			}
			else
			{
				sum1=sum1+n1+i+1;
				s1.push_back(sum1);
			}
		}
		s1.push_back(0);
		for(ll i=v.size()-1;i>=1; i++)
		{
			if(v[i]==v[i-1])
			{
				n2++;
				s2.push_back(0);
			}
			else
			{
				sum2=sum2+n2+v.size()-i;
				s2.push_back(sum2);
			}
		}
		s2.push_back(0);
		reverse(s2.begin(), s2.end());
		ll cnt=0,ans=inf;
		for(ll i=0, j=1; j<v.size(); )
		{
			if(a[j]-a[i]<=k)
			{
				if(a[j]==a[i])
					cnt++;
				j++;
			}
			else
			{
				i+=cnt+1;
				j++;
			}
			ans=min(ans,(i>0?s1[i-1]:0)+(j<v.size()-1?s2[j+1]:0));
		}
		printf("%lld\n", ans);
		v.clear();
	}
	return 0;
}
