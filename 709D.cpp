#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int

using namespace std;

vector<ll> v;
bool a[1000010];

void sig_n()
{
	ll n=0;
	v.clear();
	v.push_back(0);
	v.push_back(0);
	ll sum=0;
	for(ll i=2; sum<=1000000000; i++)
	{
		sum=i*(i-1)/2;
		v.push_back(sum);
	}
}

int main()
{
	ll a00,a01,a10,a11;
	ios_base::sync_with_stdio(false);
	cin>>a00>>a01>>a10>>a11;
	sig_n();
	vector<ll>::iterator ii;
	ii=lower_bound(v.begin(), v.end(), a00);
	if(ii==v.end() or a00!=*ii)
	{
		cout<<"Impossible"<<endl;
		return 0;
	}
	ll num0=(ii-v.begin());
	ii=lower_bound(v.begin(),v.end(), a11);	
	if(ii==v.end() or a11!=*ii)
	{
		cout<<"Impossible"<<endl;
		return 0;
	}
	ll num1=(ii-v.begin());
	if(num0*num1!=(a10+a01))
	{
		cout<<"Impossible"<<endl;
		return 0;
	}
	memset(a,0,sizeof(a));
	ll q=max(a10,a01);
	ll w=min(a10, a01);
	vector<ll> ind;
	ll k=q/w;
	ll l=q%w;
	ll cnt=0;
	for(ll i=0;i<(num1+num0); i++)
	{
		int f=(a10>a01)?1:0;
		if(i+1<k)
		{
			a[i]=f;
		}
		else if(i+1<k+l )
		{
			a[i]=!f;
			cnt++;
		}
		else if(i+1==k+l)
		{
			a[i]=f;
		}
		else if(i+1>k+l)
		{
			if(!f==0 and cnt<num0)
			{
				a[i]=0;
				cnt++;
			}
			else if(!f==1 and cnt<num1) 
			{
				a[i]=1;
				cnt++;
			}
		}
		else
		{
			a[i]=f;
		}
	}
	for(ll i=0; i<num1+num0; i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}
