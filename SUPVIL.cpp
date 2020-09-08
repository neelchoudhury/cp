#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
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

using namespace std;

string s[100010];

int main()
{
	ll t,n;
	cin>>t; 
	while(t--)
	{
		cin>>n;
		ll ss=1,v=1,f=0;
		for(ll i=0; i<n; i++)
			cin>>s[i];
		for(ll  i=0; i<n; i++)
		{
			 
			ll l=s[i].length();

			if(l>=5 and s[i][l-1]=='n' and s[i][l-2]=='a' and s[i][l-3]=='m' and s[i][l-4]=='o' and s[i][l-5]=='w')
			{
				ss++;
			}
			else if(l>=3 and s[i][l-1]=='n' and s[i][l-2]=='a' and s[i][l-3]=='m')
			{
				ss++;
			}
			else
			{
				v++;
			}
			if(ss-v>=2)
			{
				f=1;

				break;
			}
			if(v-ss>=3)
			{
				f=2;
				break;
			}

		}
		if(f==1)
			cout<<"superheroes"<<endl;
		else if(f==2)
			cout<<"villains"<<endl;
		else
			cout<<"draw"<<endl;
	}
	return 0;
}