#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
int main()
{
	ll t;
	ll T1,T2,t1,t2;
	long double p=0.0;
		long double a1=0.0,a2=0.0,a3=0.0;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld", &T1, &T2, &t1, &t2);
		 
	 
	 		
	 	
			a1=pow(((long double)1-t2/(long double)T1),2)/2;
			a2=pow(((long double)1-t1/(long double)T2),2)/2;
	
		if(t1>T2)
	 		a2=0;
	 	if(t2>T1)
	 		a1=0;
			//a3=(unsigned long double)(T1*T2);
			 
			p= 1-a1-a2;
		//	cout<<a1<<" "<<a2<<" "<<a3<<" "<<(a3-a1-a2)<<endl;
			//printf(" %.8llf %.8llf \n", a1,a2 );
			//p=1-((pow(T2-t1,1)/(2*T1))+  (pow(T1-t2,1)/(2*T2)))/2 ;
			printf("%.10llf\n", p);
		 
	}
	return 0;
} 
