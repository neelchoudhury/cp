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

int pr[10000004]; 
vector<ll> pv;
 
int main()
{
	ll t,n;
	//cout<<sizeof(a)/sizeof(ll)<<endl;
	//pr(a[1003]);
	for(int i=0;i<=3200; i++)
		pr[i]=1;
 
	pr[1]=0;
	pr[0]=0;
	for(int i=2; i<=3200; i++)
	{
		if(pr[i]!=0)
		{
		for(int j=i*i;j<=3200; j+=i)
		{
			pr[j]=0;
			//cout<<i<<" "<<j<<endl;
		}
		}
	}
	int cnt=0;
 	for(int i=1; i<=3200; i++)
 	{
 		if(pr[i])
 		{
 			//cout<<i<<endl;
 			pv.push_back(i);
 			//cnt++;
 		}
 	}
 	cout<<"cnt"<<endl;
 
	return 0;
} 
