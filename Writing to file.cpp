#include<bits/stdc++.h>
//#include<fstream.h>
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

ll gcd(ll a,ll b)
{
	ll r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main()
{
	ll n=1;
	ll s=0;
	ofstream myfile;
  	myfile.open ("example.txt");
	for(ll i=1;i<=10000000; i++ )
	{
		 s=0;
		 for(ll j=1; j<=i; j++)
		 {
		 	s+=(i/gcd(i,j));
		 }
		 myfile<<s<<",";
		 cout<<s<<" ";
	}
	myfile.close();
	return 0;
}
