#include<bits/stdc++.h>
#define ll long long int
#define ld long double
 
using namespace std;
 
int main()
{
	ll t;
	ll T1,T2,t1,t2;
	ld p=0.0;
	ld a1=0.0,a2=0.0,a3=0.0;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld", &T1, &T2, &t1, &t2);
		a1=pow((T2-t1),2)/(2*T1*T2); 
		a2=pow((T1-t2),2)/(2*T1*T2);  
		if(t1>T2)
	 		a1=0;
	 	if(t2>T1)
	 		a2=0;
	 	if(T1>(T2+t2))
	 		a2=(pow(T2,1)/(2*T1) + (T1-t2-T2)/(ld)T1);
	 	if(T2>(T1+t1))
	 		a1=(pow(T1,1)/(2*T2) + (T2-t1-T1)/(ld)T2);
		p= 1-a1-a2;
		if(t1==0 and t2==0)
			p=0;
		printf("%.6llf\n", p);
	}
	return 0;
} 
