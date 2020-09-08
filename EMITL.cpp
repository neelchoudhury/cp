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

char s[110];
ll a[28];

int main()
{
	ll t;
	sc(t);
	while(t--)
	{
		scanf("%s", s);
		mem(a);
		int n=strlen(s);
		for(int i=0; i<n; i++)
		{
			a[s[i]-'A']++;
		}
		int flag=0;
		if(a['L'-'A']>=2 and (a['T'-'A']>=2) and (a['I'-'A']>=2) and (a['M'-'A']>=2) and (a['E'-'A']>=2))
		{
			 flag=1;
		}
			if(flag==1)
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	}
	

	return 0;
}
