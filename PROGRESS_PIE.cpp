#include <bits/stdc++.h>
#define ll  long long int
#define ld  long double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 300
#define K 510
#define N 55
#define MAX 310
#define maxs 125
#define INF INT_MAX
#define PI 3.14159265
#define ep 1e-6

using namespace std;

int main()
{
	ll t,p,x,y;
	ld ang,h,b,arg;
	cin>>t;
	// cout<<setprecision(12)<<pow(10,6)*ep<<endl;
	for(ll i=1; i<=t; i++)
	{
		cout<<"Case #"<<i<<": ";
		cin>>p>>x>>y;

		ang=1.0*p/100;
		ang=360.0*ang;
		h=y-50;
		b=x-50;
		arg=atan(abs(h)/abs(b))*180/PI;
		if((sqrt(((h*h)*1.0+(b*b)*1.0))-50.0)>ep)
		{
			// cout<<"bing"<<endl;
			cout<<"white"<<endl;
		}
		else
		{
			if(b>0 and h>0)
			{
				arg=90-arg;
			}
			if(b>0 and h<0)
			{
				arg=90+arg;
			}
			if(b<0 and h<0)
			{
				arg=180+arg;
			}
			if(b<0 and h>0)
			{
				arg=270+arg;
			}
			if(b==0 and h>0)
			{
				arg=90;
			}
			if(b==0 and h<0)
			{
				arg=270;
			}
			if(h==0 and b>0)
			{
				arg=0;
			}
			if(h==0 and b<0)
			{
				arg=180;
			}
			// cout<<ang<<" "<<arg<<endl;
			if(ang-arg<ep)
				cout<<"white"<<endl;
			else
				cout<<"black"<<endl;
		}
	}
	return 0;
}