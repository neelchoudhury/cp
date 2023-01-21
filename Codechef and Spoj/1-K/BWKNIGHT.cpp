#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	ll m,n,r;
	while(t--)
	{
		scanf("%lld %lld", &m,&n);
		/*if(n<m)
		{
			ll x;
			x=n;
			n=m;
			m=x;
		}*/
		r=(m*n)*(m*n-1);
		/*if(n==1 or m==1) 
		{
			r=n*(n-1);
			printf("%lld\n", r);
			//cout<<"run "<<endl;
			
		}*/	
		 if(m>=2 and n>=2)
		{
			r=r-4*((n-1)*(m-2) + (m-1)*(n-2));
			
		}
		printf("%lld\n", r);
	
	}
	return 0;
}
