#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

vector<ll> v;

void KMP(string t,string p)
{
	ll i=0,j=0,count,m,n;
	m=p.length();
	n=t.length();
	count=0;
	ll a[m];
	a[0]=0;
	for(i=1,j=0;i<m;++i)
	{
		while(j>0&&p[j]!=p[i]) 
		j=a[j-1];
		if(p[j]==p[i])
		{
			a[i]=j+1;
			j++;	
		}
		else
		a[i]=0;
	}
	for(i=0,j=0;i<n;++i)
	{
		while(j!=0&&t[i]!=p[j])
		{
			j=a[j-1];
		}
		if(t[i]==p[j])
		{
			j++;
			if(j==m)
			{ 
				v.pb(i-j+1);
				j=a[j-1];
			}
		}
	} 
	for(ll i=0;i<v.size(); i++)
		cout<<v[i]<<endl; 
	if(v.size()==0)
		cout<<endl;
	v.clear();
}

int main()
{
	string tt,pp;
	ll t,n; 
	while(scanf("%lld", &n)==1)
	{ 
		cin>>pp;
		cin.clear();
		cin>>tt;
		cin.clear();
		KMP(tt,pp);
	}
	return 0;
}
