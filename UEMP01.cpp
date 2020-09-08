#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

int main()
{
	ll t,n,k,x,y;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &k);
		int f=0;
		while(n--)
		{
			scanf("%lld %lld", &x, &y);
			if(sqrt((ld)x*x+(ld)y*y)<=k)
			{
				f=1;
				 
			}
		}
		
			if(f==1)
				cout<<"Available"<<endl;
			else
				cout<<"Not Available"<<endl;
	}
	return 0;
	
}
