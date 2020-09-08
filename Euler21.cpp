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
	for(int i=1; i<=10000;i++ )
		a[i]=0;
	for(int i=1; i<=10000;i++)
	{
		a[i]=sumdiv(i);
	}
	cout<<sumdiv(5040);
	cout<<endl<<sumdiv(284)<<endl;
	ll cnt=0;
	for(int i=2; i<=5000; i++)
	{
		if((i)==(a[a[i]]))
			cnt+=(i+a[a[i]]);
		cout<<cnt<<" "<<i<<" "<<a[i]<<" "<<a[a[i]]<<endl;
	}
	for(int i=5001;i<=10000;i++)
	{
			if((i)==(a[a[i]]))
			cnt+=(i+a[a[i]]);
			cout<<cnt<<" "<<i<<" "<<a[i]<<" "<<a[a[i]]<<endl;
	}
	cnt/=2;
	printf("%lld\n", cnt);
	return 0;
	
}
