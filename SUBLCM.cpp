#include<bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{
	bool s[1000010];

memset(s, 1, sizeof(s));
s[0]=0;
s[1]=1;
s[2]=1;
s[3]=1;
for(ll i=2; i<=(1000010)/2; i++)
{
	if(s[i])
	{
		for(ll j=i+i; j<1000010; j=j+i)
			s[j]=0;
	}
}
/*for(int i=0; i<=20; i++)
	cout<<s[i]<<" ";
cout<<endl;*/

	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll a[n];
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]);
		bool b[n];
		memset(b,0,sizeof(b));
		for(ll i=0; i<n; i++)
			b[i]=s[a[i]];
		ll cnt=1;
		ll ctr=1;
		vector<ll> v;
		if(b[0]==1)
			v.push_back(a[0]); 
		for(ll i=1; i<n; i++)
		{
			if(b[i]==1  and b[i-1]==1 and a[i]!=a[i-1])
			{
				v.push_back(a[i]);
				ctr++;
			}
			else
			{
				int flag=0;
				sort(v.begin(), v.end());
				for(ll i=1; i<v.size(); i++)
				{
					if(v[i]==v[i-1])
					{
						flag=1;
						break;
					}
				}
				if(!flag)
					cnt=max(cnt,ctr);
				ctr=1;
				v.clear();
			}
			
		}
		cnt=max(cnt,ctr);
		if(cnt<=1)
			cout<<-1<<endl;
		else
			cout<<cnt<<endl;
	}
	return 0;
}
