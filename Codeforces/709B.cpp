#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> v;
ll aa[100010];

int main()
{
	ll n,a,x;
	ios_base::sync_with_stdio(false);
	cin>>n>>a;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(), v.end()); 
	memset(aa,0,sizeof(aa)); 
  	for(ll i=0; i<n; i++)
  	{
  		aa[i]=abs(v[i]-a);
	}
	/*for(ll i=0; i<n; i++)
		cout<<aa[i]<<" ";*/
	//cout<<endl;
	ll ans=INT_MAX;

	if(n==1)
	{
		cout<<0<<endl;
		return  0;
	}
	if(a>=v[n-1] or a<=v[0])
	{
		if(a<=v[0])
		{
			ans=(v[n-2]-a);
		}
		else if(a>=v[n-1])
		{
			ans=a-v[1];
		}
		
		cout<<ans<<endl;
		return 0;
	}
	if(n==2)
	{
		ans=min(aa[0],aa[1]);
		cout<<ans<<endl;
		return 0;
	}
	ll ind=0;
	ll qqq=INT_MAX;
	for(ll i=0; i<n-1; i++)
	{
		if(v[i]<a and v[i+1]>a)
		{
			ind=i;
			break;
		}
	}	
	//cout<<"inf "<<ind<<endl;
	if(ind==0 or ind==n-2)
	{
		if(ind==n-2)
		{
			ans=min(aa[0], min(aa[n-1]+2*aa[1], 2*aa[n-1]+aa[1]) );
			cout<<ans<<endl;
		}
		else if(ind==0)
		{
			ans=min(aa[n-1], min(aa[0]+2*aa[n-2],2*aa[0]+aa[n-2]) );
			cout<<ans<<endl;
		}
		
		return 0;
	}
	ll q1=2*aa[0]+aa[n-2];
	ll q2=aa[0]+2*aa[n-2];
	ll q3=2*aa[1]+aa[n-1];
	ll q4=aa[1]+2*aa[n-1];
	ans=min(min(q1,q2), min(q3,q4));
	cout<<ans<<endl;
	return 0;
}
