#include<bits/stdc++.h>
#define ll long long int
//#define ld long double
#define N 100010

using namespace std;

ll a[N],b[N];

int main()
{
	ll n,m;
	memset(a,0.0, sizeof(a));
	memset(b,0.0, sizeof(b));
	scanf("%I64d %I64d", &n, &m);
	for(ll i=0;i<n; i++)
		scanf("%I64d", &a[i]);
	for(ll j=0; j<m; j++)
		scanf("%I64d", &b[j]);
	sort(a,a+n);
	reverse(a,a+n);
	sort(b,b+n);
	reverse(b,b+n);
	ll ans=0;
	ll sum=0,ss=0;
	ll i=0,j=0, ind=0,f=0;
	for(i=0; i<m; i++)
		ss+=b[i];
	for( i=0; i<m; i++)
	{
		sum+=a[i];
	}
	/*for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0; i<m; i++)
		cout<<b[i]<<" ";
	cout<<endl;*/
/*	while(ind>0)
	{
		for(i=ind+1; i<=m+ind; i++)
		{
		
			if(a[i]>=b[i])
				sum+=a[i]-b[i];
			else
			{
				ind=i;
				sum=0;
				break;
			}
			if(i==m+ind)
			{
				if(a[i]==b[i])
					ind=0;
			}
		}
		f=1;
	}
	//cout<<"sum "<<sum<<endl;
	if(f)
		ind=i-1;
	else
		ind=1;*/
	ans=sum-ss;
	for(i=1; i<n-m; i++)
	{
		if(a[i+m-1]>=b[m-1])
		{
			sum=sum+(a[i+m-1]-a[i-1]);
			ans=min(ans,sum-ss);
			//cout<<"sum "<<sum<<" ans "<<ans<<endl;
		}
		else
		{
			break;
		}
	}
	printf("%I64d\n", ans);
	return 0;
	
}

