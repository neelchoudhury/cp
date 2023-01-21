#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,m,s,p,q;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld %lld", &n,&m,&s,&p,&q);
		ll ans=0 ;
		ll pp=0,qq=0;
		while(s--)
		{
			qq=qq+q;
			if(qq>n)
				qq=m+(qq-m)%(n-m+1);	
			pp=(pp+p) ;
			if(pp>n)
				pp=m+(pp-m)%(n-m+1);
			//cout<<"pp "<<pp<<" qq "<<qq<<endl;
			if(pp==qq)
				ans++;
			
		}
		cout<<ans<<endl;
		
	}
	return 0;
}
