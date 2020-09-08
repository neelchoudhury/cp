#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	vector<int> v;
	ll a,b,n;
	ll l,t,m;
	ll v0=0;
	ll s=0;
	ll x;
	scanf("%I64d %I64d %I64d", &a, &b, &n);
	while(n--)
	{
		scanf("%I64d %I64d %I64d", &l, &t, &m);
		v0=a+(l-1)*b;
		x=m*t;
		if(v0>t)
		{
			cout<<-1<<endl;
		}
		else
		{
			ll s1=0;
			for(int i=0; i<m; i++)
			{
				v[i]=v0+i*b;	
			}
			int j=0;
			while(t--)
			{
				for(int i=j;i<m+j; i++)
				{
					v[i]-=1;
					if(v[i]==0)
					{
						j+=1;
						s+=1;
						v[m+j]=v0+(m+j)*b;
					}
				}
				
			}
			
		}
		printf("%I64d\n",s);
	}
	return 0;
}
