#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll a,b; 
	scanf("%I64d", &t);
	ll cnt;
	while(t--)
	{
		cnt=0;
		int k;
		scanf("%I64d %I64d", &a, &b);
		for(ll i=b+1; i<=a; i++ )
		{
			k=i;
			for(ll j=2; j<=(k);j++)
			{
				if(k%j==0)
				{
					while(k%j==0)
					{
						//cout<<cnt<<" "<<k<<" "<<j<<endl;
												cnt++;
						k/=j;
					}
				}
			}
		}
		printf("%I64d\n", cnt);
	}
	return 0;
}
