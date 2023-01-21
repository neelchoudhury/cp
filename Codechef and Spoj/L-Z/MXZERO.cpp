#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		int x, cnt0=0,cnt1=0;
		for(int i=0; i<n; i++)
			{
				scanf("%d", &x);
				if(x)
					cnt1++;
				else
					cnt0++;
			}
		if(cnt1%2)
			cout<<cnt1<<endl;
		else
			cout<<cnt0<<endl;
	}
	return 0;
}
