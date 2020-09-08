#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define RTWO 1.4142135623730950488016887
#define RTHREE 1.7320508075688772935274463

using namespace std;

/*ld power(ld a,ld b)
{
	ld y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y);
		y=(y*y);
		b=b/2;
	}
	return x;
}*/

int main()
{
	ll i,k,s,ai,bi;
	scanf("%lld %lld %lld", &i, &k, &s);
	scanf("%lld %lld", &ai, &bi);
	ld alph=0.0, beta=0.0, gamm=0.0;
	alph=( RTWO*(1-RTHREE)*ai + RTWO*(1+RTHREE)*bi );
	beta=( RTWO*(1+RTHREE)*ai - RTWO*(1-RTHREE)*bi );
	gamm=16;
	
	ld ak=0.0, bk=0.0;
	
 	if(k>=i)
 	{
 		if((k-i)%2==0)
 		{
 			ak=pow(2,(2*(k-i)-s))*ai;
 			bk=pow(2,(2*(k-i)-s))*bi;
 		}
 		else
 		{
 			ld a1=0.0,b1=0.0;
 			a1=RTWO*(ai+bi)-RTWO*RTHREE*(ai-bi);
 			b1=RTWO*(ai-bi)+RTWO*RTHREE*(ai+bi);
 			ak=pow(2,(2*(k-i-1)-s))*a1;
 			bk=pow(2,(2*(k-i-1)-s))*b1;
 		}
 		
 	}
 	if(k<i)
 	{
 		if((i-k)%2==0)
 		{
 			ak=pow(2,-(2*(i-k)+s))*ai;
 			bk=pow(2,-(2*(i-k)+s))*bi;
 		}
 		else
 		{
 			ld a1=0.0,b1=0.0;
 			a1=RTWO*(ai+bi)-RTWO*RTHREE*(ai-bi);
 			b1=RTWO*(ai-bi)+RTWO*RTHREE*(ai+bi);
 			ak=pow(2,-(2*(-k+i+1)+s))*a1;
 			bk=pow(2,-(2*(-k+i+1)+s))*b1;
 		}
 	}
	
	ld ans=ak+bk;
	printf("%Lf\n", ans);
	return 0;
}
