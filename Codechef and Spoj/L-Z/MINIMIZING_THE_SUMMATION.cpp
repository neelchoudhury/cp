#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

ll a[100010];

int main()
{
	//ios;
	ll n,k;
	cin>>n>>k;
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
		//cin>>a[i];
	sort(a,a+n);
	ll sum=0,cnt=INT_MAX,ss=a[0];
	ll indi=n-1,indj=0;
	k=min(k,n);
	for(ll i=1; i<n; i++)
	{
		// cout<<sum<<endl;
		if(i<k-1)
		{
			
			sum+=i*a[i]-ss;
			ss+=a[i];
			// cout<<sum<< "  dd"<<endl;
		}
		else if(i==k-1)
		{
			sum+=i*a[i]-ss;
			ss+=a[i];
			if(sum<cnt)
			{
				// cout<<sum<<" "<<i<<endl;
				cnt=sum;
				indi=i;
			}
		}
		else if(i>=k)
		{
			// cout<<"vig"<<endl;
			sum=sum+((k-1)*a[i]-(ss-a[i-k]))-((ss-a[i-k])-(k-1)*a[i-k]);
            ss+=a[i]-a[i-k];
			if(sum<cnt)
			{
				// cout<<sum<<" "<<i<<endl;
				cnt=sum;
				indi=i;
			}
			// cout<<sum<<endl;
		}
	}
    /*if(indi<k-1)
    {
        cout<<0<<endl;
        return 0;
    }*/
    //indi=max(k-1,indi);
	ll ans=0,val=a[indi+1-k]*a[indi+1-k];
	sum=0;
	ss=a[indi+1-k];
	 // cout<<"indi "<<indi<<endl;
	for(ll i=indi+2-k; i<=indi; i++)
	{
		 val+=a[i]*a[i];
		 sum+=ss*a[i];
		 ss+=a[i];
	}
	cout<<val<<endl;
	cout<<sum<<endl;
    ans=(k-1)*val-2*sum;
	cout<<2*ans<<endl;
	return 0;
}