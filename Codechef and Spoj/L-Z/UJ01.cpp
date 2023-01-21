#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,a,b,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld", &a,&b,&n);
		ll sa=0,sb=0,cnt=0;
		int f=0;
		while(cnt<n )
		{
			if((sa+a)>(sb+b))
			{
				sb+=b,cnt++,f=2;
			}
			else if((sa+a)<(sb+b))
			{
				sa+=a;
				cnt++,f=1;
			}
			
			else if((sa+a)==(sb+b))
			{
				sa+=a,sb+=b,cnt++,f=3;
			}
			//cout<<cnt<<" "<<sa<<" "<<sb<<endl;
		}
		if(f==1)
			printf("%lld\n", sa);
		else 
			printf("%lld\n", sb);
	}
	return 0;
}
