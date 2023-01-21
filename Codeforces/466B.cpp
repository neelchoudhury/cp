#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std;

int main()
{
	ll n,a,b,a1,b1;
	ios;
	cin>>n>>a>>b;
	if(6*n<=a*b)
	{
		cout<<a*b<<endl<<a<<" "<<b<<endl;
	}
	else
	{
		ll ans=INT_MAX;
		ll f=0;
		if(a>b)
		{
			swap(a,b);
			f=1;
		}
		ll d1=0;
		ll aa=a,bb=b;
		 
		for(ll i=aa; i*i<=(6*n);i++)
		{
			d1=(6*n)/i;
			if(i*d1<6*n)
				d1++;
			if(d1<b)
				continue;	
			if(i*d1<ans)
			{
				ans=i*d1;
				a1=i,b1=d1;
			}
		}
		if(f)
			swap(a1,b1);
		cout<<(a1*b1)<<endl<<a1<<" "<<b1<<endl; 
	}
	return 0;
}