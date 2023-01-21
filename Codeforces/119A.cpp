#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int gcd(int a, int b)
{
	int r=a%b;
	while(r)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	int ans=0;
	int g=0;
	while(n)
	{
		if(ans%2==0)
		{
			g=gcd(a,n);
			if(g<=n)
				n-=g;
			else
				break;
		}
		else
		{
			g=gcd(b,n);
			if(g<=n)
				n-=g;
			else
				break;
		}
		ans++;
	}
	cout<<!(ans%2)<<endl;
	return 0;
}
