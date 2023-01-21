#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld\n",a)
#define MOD 1000000007
 
using namespace std;

ll arr[68000];

ll p(ll qq)
{
	ll ww=1;
		while(ww<qq)
		 		{
		 			ww=ww<<1;
		 		}
		 		
		return ww; 		
}

int main()
{
	//ios;
	ll g,a,t,d,x,y;
	 
	ll w=1;
	
	while(1)
	{
		x=0,y=0;
		sc(g),sc(t),sc(a),sc(d);
		
		if(g==-1 and t==-1 and a==-1 and d==-1)
			break;
		else
		{
			ll ww,qq; 
			x=	g*(t)*(t-1)/2;
			  qq=g*a+d;
			 ww=1;
		 //	if(arr[qq]==0)
		 	
		 			 ww=1;
		while(ww<qq)
		 		{
		 			ww=ww<<1;
		 		}
		 		
			
		 		y=ww-qq;
		 	qq=ww;
		 	
		//	else if(arr[qq]==1)
		 
			x+=(qq-1);
		}
		printf("%lld*%lld/%lld+%lld=%lld+%lld\n",g,a,t,d,x,y);
	}
	return 0;
}
