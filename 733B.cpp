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

ll a[100010][2];

int main()
{
	ios;
	ll n;
	ll l,r;
	cin>>n;
	ll ans=0, ind=0;
	mem(a);
	ll cnt1=0,cnt2=0,sum1=0,sum2=0;
	for(ll i=0; i<n; i++)
	{
		cin>>l>>r;
		a[i][0]=l, a[i][1]=r;
		if(1)
		{
			if(abs(r-l)>ans)
			{
				ind=i+1;
				ans=abs(r-l);
			}
		}
		sum1+=l,sum2+=r;
		if(l<r)
			cnt1++;
		else
			cnt2++;
	}
	 
	 
		{
			 ind=0;
			 ll ans=abs(sum1-sum2);
			 ll sum;
			 for(ll i=0; i<n; i++)
			 {
			 	sum=abs(sum1-sum2-2*a[i][0]+2*a[i][1]);
			 	if(sum>ans)
			 	{
			 		ans=sum;
			 		ind=i+1;
			 	}
			 }
			 cout<<ind<<endl;
		}
	return 0;
}