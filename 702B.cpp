#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll pp[33];
vector<ll> a;

int main()
{
	pp[0]=1;
	for(ll i=1; i<=32; i++)
	{
		pp[i]=2*pp[i-1];
	}
	ll n,x;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	ll ans=0;
	vector<ll>::iterator ii,jj;
	for(int i=0; i<n; i++)
	{
		
		for(int j=0; j<=32; j++)
		{
			ll y=pp[j]-a[i];
			//cout<<y<<endl;
			/*if(y<0)
				break;*/
			ii=a.begin()+i;
			jj=a.begin()+i;
				ii++;
				ii=lower_bound(ii, a.end(), y);
				jj=upper_bound(jj,a.end(), y);
				jj--;
				if((ii!=a.end() and *ii==y) and (*jj==y))
					ans+=(jj-ii+1);
			
			 
		}
	}
	cout<<ans<<endl;
	return 0;
}
