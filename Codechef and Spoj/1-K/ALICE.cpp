#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<vector<ll> > a;
vector<ll> v;

int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		a.clear();
		v.clear();
		cin>>n;
		if(n==1)
		{
			cout<<"0 1 1 0"<<endl<<"0 0 1 1"<<endl;
			continue;
		}
		
		//memset(a,0,sizeof(a));
		for(ll i=n, j=n-1; i>=0; i--,j=(j-2+n+1)%(n+1))
		{
			v.clear();
		//	cout<<"bing"<<endl;
			v.push_back(0);
			v.push_back(i);
			v.push_back(n);
			v.push_back(j);
			a.push_back(v);
			if(n%2==1 and i==(n+1)/2)
				i-=1;
			else if(n%2==0 and i-1==(n)/2)
				i-=1;
		}
		v.clear();
		v.push_back(0);
		v.push_back(n);
		v.push_back(n);
		v.push_back(0);
		a.push_back(v);
		for(int i=0; i<=n;i++)
		{
			for(int j=0; j<4; j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
