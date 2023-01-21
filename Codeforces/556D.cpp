#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,m;
	cin>>n>>m;
	ll d[n-1][2];
	memset(d,0 ,sizeof(d));
	
	ll l1,r1,l2,r2;
	cin>>l1>>r1;
	for(ll i=0; i<n-1; i++)
	{
		cin>>l2>>r2;
		d[i][0]=(l2-r1+1);
		d[i][1]=(r2-l1+1);
		l1=l2;
		r1=r2;
	}
	sort(d,d+n-1);
	ll a[m];
	for(ll i=0; i<m; i++ )
		cin>>a[i];
	sort(a,a+m);
	int flag=0;
	ll b[m];
	memset(b,0,sizeof(b));
	int j=0;
	int cnt=0;
	for(int i=0; j<m; )
	{
		if(a[j]>=d[i][0] and a[j]<=d[i][1])
			b[j]=1,cnt++,i++;
		j++;
	}
	if(cnt==n-1)
	{
		cout<<"Yes"<<endl;
		for(int i=0; i<m; i++)
			if(b[i]==1)
				cout<<a[i]<<" ";
		cout<<endl;
	}
	else
		cout<<"No"<<endl;
	return 0;
	
}
