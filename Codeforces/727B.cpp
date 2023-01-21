#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

ll a[5010];

int main()
{
	ll n;
	ll i,j,x;
	cin>>n;
	ll zz=0,xx=0,vv=0;
	for(ll i=1;i<=n; i++)
	{
		if(i==1)
		{
			cout<<"? "<<1<<" "<<2<<endl;
			fflush(stdout);
			cin>>x;
			zz=x;
		}
		else if(i==2)
		{
			cout<<"? "<<1<<" "<<3<<endl;
			fflush(stdout);
			cin>>x;
			xx=x;
			vv=zz-xx;
		}
		else if(i==3)
		{
			cout<<"? "<<2<<" "<<3<<endl;
			fflush(stdout);
			cin>>x;
			a[2]=(vv+x)/2;
			a[3]=x-a[2];
			a[1]=zz-a[2];
		}
		else
		{
			cout<<"? "<<1<<" "<<i<<endl;
			fflush(stdout);
			cin>>x;
			a[i]=x-a[1];
		}
		
	}
	cout<<"! ";
	fflush(stdout);
	for(ll i=1; i<=n; i++)
	{
		cout<<a[i]<<" ";
		fflush(stdout);
	}
	cout<<endl;
	fflush(stdout);
	return 0;
}