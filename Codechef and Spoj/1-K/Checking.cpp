#include<bits/stdc++.h>
#define ll long long int
#define N 1000010
#define pb push_back

using namespace std;

typedef std::pair<std::string, ll> Data;

ll a[N],b[N],c[N],d[N];
vector<Data> ch;

int main()
{
	ll n,m;
	scanf("%lld %lld", &n, &m);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	memset(d,0,sizeof(d));
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
	ll cnt=0,j;
	for(ll i=1; i<n; i++)
	{
		 
		for( j=i-1; j>=0;j-- )
		{
			if(a[i]>a[j])
			{
				j-=b[j];
			}
			else
			{
				break;
			}
		}
		if(j<0)
			j=0;
		if(j<=0 and a[j]<a[i])
			b[i]=i;
		else if(a[j]>a[i])
			b[i]=i-j-1;
	}
	for(ll i=n-2; i>=0; i--)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				j+=c[j];
			}
			else
				break;
		}
		if(j>n-1)
			j=n-1;
		if(j>=n-1 and a[j]<a[i])
			c[i]=j-i;
		else if(a[j]>a[i])
			c[i]=j-i-1;
		
	}
	/*for(int i=0; i<n; i++)
		cout<<b[i]<<" ";
	cout<<endl;
	for(int i=0; i<n; i++)
		cout<<c[i]<<" ";
	cout<<endl;*/
	for(ll i=0; i<n; i++)
		d[i]=(b[i]+1)*(c[i]+1);
	/*for(int i=0; i<n; i++)
		cout<<d[i]<<" ";
	cout<<endl;*/
	ll x;
	string qw;
	for(ll i=0; i<m; i++)
	{
		cin>>qw;
		x=qw[1]-'0';
		qw[1]=x+'0';
		ch.pb(make_pair(i,qw));
	}
	sort(ch.begin(),ch.end());
	for(int i=0; i<n; i++)
	{
		cout<<ch[i].first<<" "<<ch[i].second<<endl;
	}
	return 0;
}
