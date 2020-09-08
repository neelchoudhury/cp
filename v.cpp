#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
	bool a[1000010];
	for(int i=0;i<1000010;++i)
	{
		a[i]=0;
	}
	ll n;
	scanf("%I64d",&n);
	ll count=0;
	ll ans=0;
	while(n--)
	{
		char ch;
		ll x;
		scanf(" %c %I64d",&ch,&x);
		if(ch=='+')
		{
			count++;
			if(count>0&&count>ans)
			{
				ans+=count;
			}
			a[x]=1;
		}
		else
		{
			count--;
			if(a[x]==0)
			{
				ans++;
			}
			a[x]=0;
		}
	}
	cout<<ans<<endl;
	return 0;
}
