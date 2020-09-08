#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll sumdiv(int n)
{
	int s=1;
	for(int i=2;i<=sqrt(n); i++)
	{
		if(n%i==0)
			s+=(i+n/i);
	}
	return s;
}

int main()
{
	ll a[10001];
	ll cnt=0;
	ll b;
	for(int i=1; i<=10000;i++ )
		a[i]=0;
	for(int i=1; i<=10000;i++)
	{
		a[i]=sumdiv(i);
		if(a[i]>i and a[i]<=10000 )
		{
			b=sumdiv(a[i]);
			if(b==i)
				{
					cnt+=(a[i]+i);
			cout<<a[i]<<" "<<b<<" "<<i<<" "<<cnt<<endl;
				}
		}
		
	}
	printf("\n\n\ncnt   %lld: \n", cnt);
	cout<<sumdiv(5040);
	cout<<endl<<sumdiv(284)<<endl;
	
/*	for(int i=2; i<=5000; i++)
	{
		if((i)==(a[a[i]]))
			cnt+=(i+a[a[i]]);
		cout<<cnt<<" "<<i<<" "<<a[i]<<" "<<a[a[i]]<<endl;
	}*/
/*	for(ll i=5040;i<=10000;i++)
	{
			if((i)==(a[a[i]]))
			cnt+=(i+a[a[i]]);
			//cout<<cnt<<" "<<i<<" "<<a[i]<<" "<<a[a[i]]<<endl;
	}*/
/*	cnt/=2;
	printf("%lld\n", cnt);*/
	return 0;
	
}
