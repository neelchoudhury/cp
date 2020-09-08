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

int main()
{
	ll t,a,d,l,r;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld", &a, &d, &l, &r);
		while(d>9)
		{
			int m=0;
			while(d>0)
			{
				m+=d%10;
				d=d/10;
			}
			d=m;
		}
		a=a+(l-1)*d;
		while(a>9)
		{
			int m=0;
			while(a>0)
			{
				m+=a%10;
				a=a/10;
				
			}
			a=m;
		}
		ll n=r-l+1;
		ll ans=0;
		if(d==0 or d==9)
		{
			ans=a*n;
		}
		else if(d==3 or d==6)
		{
			ll x=n%3;
			 ll y=n/3;
			 ll s=0;
			 ll q=a;
			 if(n>=3)
			 {
			 	//cout<<" n "<<n<<endl;
			 do
			 {
			 	s+=q;
			 	q=q+d;
			 	if(q>=10)
			 		q=q%10+1;
			 	//cout<<"c2 "<<q<<endl;
			 }while(q!=a);
			 }
			 s=s*y;
			 q=a;
			 while(x!=0)
			 {
			 	s+=q;
			 	q=q+d;
			 	if(q>=10)
			 		q=q%10+1;
			 	x--;
			 	//cout<<s<<" "<<q<<endl;
			 }
			 ans=s;
		}
		 
		else
		{
			ll x=n%9;
			 ll y=n/9;
			 ll s=0;
			 ll q=a;
			 if(n>=9)
			 {
			 	//cout<<" n "<<n<<endl;
			 do
			 {
			 	s+=q;
			 	q=q+d;
			 	if(q>=10)
			 		q=q%10+1;
			 	//cout<<"c3 "<<q<<" "<<s<<endl;
			 }while(q!=a);
			 }
			 s=s*y;
			 q=a;
			 while(x!=0)
			 {
			 	s+=q;
			 	q=q+d;
			 	if(q>=10)
			 		q=q%10+1;
			 	//cout<<s<<" "<<q<<endl;
			 	x--;
			 }
			 ans=s;
		}
		
		printf("%lld\n",ans);
	}
	return 0;
}
