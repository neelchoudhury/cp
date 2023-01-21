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

int main()
{
	string s[5];
	for(ll i=0; i<4; i++)
		cin>>s[i];
	ll f=0;
	for(ll i=0; i<=3; i++)
	{
		for(ll j=0; j<=3; j++)
		{
			if(j<=1)
			{
				if(s[i][j]=='x' and s[i][j+1]=='x' and s[i][j+2]=='.')
				{
					f=1;
					break;
				}
				if(s[i][j]=='.' and s[i][j+1]=='x' and s[i][j+2]=='x')
				{
					f=1;
					break;
				}
				if(s[i][j]=='x' and s[i][j+1]=='.' and s[i][j+2]=='x')
				{
					f=1;
					break;
				}
			}
			if(i<=1)
			{
				if(s[i][j]=='x' and s[i+1][j]=='x' and s[i+2][j]=='.')
				{
					f=1;
					break;
				}
				if(s[i][j]=='x' and s[i+1][j]=='.' and s[i+2][j]=='x')
				{
					f=1;
					break;
				}
				if(s[i][j]=='.' and s[i+1][j]=='x' and s[i+2][j]=='x')
				{
					f=1;
					break;
				}
			}
			if(i<=1 and j<=1)
			{
				if(s[i][j]=='x' and s[i+1][j+1]=='x' and s[i+2][j+2]=='.')
				{
					f=1;
					break;
				}
				if(s[i][j]=='.' and s[i+1][j+1]=='x' and s[i+2][j+2]=='x')
				{
					f=1;
					break;
				}
				if(s[i][j]=='x' and s[i+1][j+1]=='.' and s[i+2][j+2]=='x')
				{
					f=1;
					break;
				}
			}
			if(i>=2 and j<=1)
			{
				if(s[i][j]=='x' and s[i-1][j+1]=='x' and s[i-2][j+2]=='.')
				{
					f=1;
					break;
				}
				if(s[i][j]=='.' and s[i-1][j+1]=='x' and s[i-2][j+2]=='x')
				{
					f=1;
					break;
				}
				if(s[i][j]=='x' and s[i-1][j+1]=='.' and s[i-2][j+2]=='x')
				{
					f=1;
					break;
				}
			}
		}
	}
	if(f)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}