#include<bits/stdc++.h>
#define ll long long int
#define M 20010

using namespace std;

ll a[M];

int main()
{
	ll t,n,m;
	scanf("%lld", &t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		scanf("%lld %lld", &n, &m);
		for(int i=0; i<m; i++)
		{
			scanf("%lld", &a[i]);
		}
		ll ans=0;
		ll sum=0;
		ll i=0;
		sort(a,a+m);
		int flag=0;
		int aa=m;
		while(m>1 and i<aa)
		{
			if(a[i]<=m-2)
			{
				m-=(a[i]+1);
				sum+=a[i];
				i++;
			 	
			}
			else
			{
				flag=1;
				break;
			}
			 
			 
		}
		if(m<=1)
		{
			
			//sum-=a[i];
			i--;
		}
		
		ans=sum;
		//m-=sum;
		//cout<<"ans "<<ans<<endl;
		ll q=m/a[i];
		ll r=m%a[i];
		if(m>1)
			ans+=(m-1);
			  
			  
		
		cout<<ans<<endl;
	}
	return 0;
}
