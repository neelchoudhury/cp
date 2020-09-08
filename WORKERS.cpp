#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%d",&a)
#define pr(a) printf("%d\n",a)
#define MOD 1000000007
 
using namespace std;

vector<int> v;

int main()
{
	int t,n,m,x;
	sc(t);
	while(t--)
	{
		sc(n),sc(m);
		v.clear();
		int b;
		vector<int>::iterator qq;
		for(int i=0; i<n; i++)
			v.pb(i);
		while(m--)
		{
			sc(x);
			if(x>=1)
			{
				qq=lower_bound(v.begin(),v.end(),0)
				if(*qq<=i)
				{
					*qq=x;
				}
				else if(*qq>i)
				{
					b++;
				}
			}
		}
		int qqq=0;
		for(int i=0; i<n; i++)
		{
			qqq=max(qqq,v[i]);
		}
		int ans=0;
		ans=qqq+b;
		pr(ans);
	}
	return 0;
}
