#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long int
#define ld long double

using namespace std;

int main()
{
	ll t;
	ll w,d,s,r;
	ld x,th;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld%lld%lld%lld",&w,&d,&s,&r);
		//cout<<"doing"<<endl;
	 	if(r>s)
	 	{
			x=s*w/(float)sqrt((r*r-s*s));
			th=sqrt(w*w+x*x)/(float)s +(d-x)/(float)r;
			printf("%.6llf %.6llf\n", d-x,th);
	 	}
	 	else if(r==s)
	 	{
	 		x=0.0;
	 		th=sqrt(w*w+d*d)/(float)s;
	 			printf("%.6llf %.6llf\n", x,th);
	 	}
	 	else
	 	{
	 		if(sqrt(w*w+d*d)/(float)s<=d/(float)r)
	 		{
	 			x=0.0;
	 		th=sqrt(w*w+d*d)/(float)s;
	 			printf("%.6llf %.6llf\n", x,th);
	 		}
	 		else
	 		{
	 			x=(float)d;
	 			th=d/(float)r;
	 			printf("%.6llf %.6llf\n", x,th);
	 		}
	 	}
		
	}
	return 0;
}
