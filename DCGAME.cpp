#include<bits/stdc++.h>
#define ll long long int
#define N 1000010
#define pb push_back

using namespace std;

typedef std::pair<std::string, ll> Data;

ll a[N],b[N],c[N],d[N],e[N],f[N];
vector<pair<ll,char*>> ch;
vector<pair<ll,ll>> arr;
char ans[N];

int main()
{
	ll n,m;
	scanf("%lld %lld", &n, &m);
	cout<<"This is the progrm"<<endl;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	memset(d,0,sizeof(d));
	memset(e,0,sizeof(e));
	memset(f,0,sizeof(f));
	//memset(ff,0,sizeof(ff));
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
	/*ll cnt=0,j;
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
	cout<<"b"<<endl;
	for(int i=0; i<n; i++)
		cout<<b[i]<<" ";
	cout<<endl;
	cout<<"c"<<endl;
	for(int i=0; i<n; i++)
		cout<<c[i]<<" ";
	cout<<endl;
	for(ll i=0; i<n; i++)
		d[i]=(b[i]+1)*(c[i]+1);
	cout<<"d"<<endl;
	for(int i=0; i<n; i++)
		cout<<d[i]<<" ";
	cout<<endl;
	for(ll i=0; i<n; i++)
		arr.pb(make_pair(a[i],d[i]));
	sort(arr.begin(),arr.end());
	for(ll i=1; i<n; i++)
		e[i]=e[i-1]+arr[i-1].second;
	for(ll i=n-2; i>=0;i--)
		f[i]=f[i+1]+arr[i+1].second;*/
	ll x,xx;
	char q,w;
	char qw[5];
	for(ll i=0; i<m; i++)
	{
		cin>>q>>x>>w;
		cout<<"Creating "<<endl;
		qw[0]=q;
		qw[1]=i+'0';
		qw[2]=w;
		ch.pb(make_pair(x, qw));
		cout<<"doing "<<i<<endl;
	}
	cout<<"COmeout of loop"<<endl;
	for(int i=0; i<m; i++)
	{
		cout<<ch[i].first<<" "<<ch[i].second<<endl;
	}
	sort(ch.begin(),ch.end());
	cout<<"next..."<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<ch[i].first<<" "<<ch[i].second<<endl;
	}
	//int j=0;
	ll sol=0;
	for(ll i=0; i<ch.size(); i++)
	{
		if(arr[j].first<ch[i].first)
		{
			while(arr[j].first<ch[i].first and j<n)
				j++;
		}		
		if(ch[i].second[0]=='>')
		{ 	
			if(ch[i].first<arr[0].first)
				sol=f[0];
			else
				sol=f[j];
			
		}
		else if(ch[i].second[0]=='<')
		{
			if(arr[j].first==ch[i].first)
				sol=e[j];
			else if(arr[j].first<ch[i].first and j<n)
				sol=e[j+1];
			else if(ch[i].first>arr[n-1].first)
				sol=e[j];
		}
		if(sol%2==0)
		{
			if(ch[i].second[2]=='D')
				ans[ch[i].second[1]]='C';
			else
				ans[ch[i].second[1]]='D';
		}
		else
			ans[ch[i].second[1]]=ch[i].second[2];
	}
	printf("%s\n", ans);
	return 0;
}
