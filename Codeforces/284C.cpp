#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%I64d\n",n)
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010
#define MAX 400010

using namespace std;

stack<ld> stk; 
ld val[N],arr[N];

int main()
{
	ll n;
	sc(n); 
	ll t;
	ll cnt=1,x;
	mem(val),mem(arr); 
	ld  a,sum=0,ans=0;
	while(n--)
	{
		sc(t); 
		ans=0;  
		if(t==1)
		{
			sc(x);scf(a); 
			val[x]+=a; 
			ans=(sum+a*x)/cnt;
			sum+=a*x;
		}
		else if(t==2)
		{
			scf(a); 
			
			cnt++;
			val[cnt]=0;
			arr[cnt]=a;
			ans=(sum+a)/cnt;
			sum+=a;
		}
		else
		{
			if(cnt>=2)
			{  
				sum-=arr[cnt];
				sum-=val[cnt];
				val[cnt-1]+=val[cnt];
				cnt--;

			}
			ans=sum/cnt;
		} 
		printf("%.15f\n",ans);
	}
	return 0;
}