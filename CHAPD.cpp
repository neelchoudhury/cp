#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll gcd(ll a, ll b)
{
	ll r;
	r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main()
{
	ll t,a,b,g,g1,b1;
	
	scanf("%lld", &t);
	while(t--)
	{
		 
		scanf("%lld %lld", &a, &b);
		g=gcd(a,b);
		b1=b/g;
		g1=gcd(b1,g);
		//cout<<a<<" a "<<b<<"  b "<<g<<" g "<<g1<<" g1 "<<endl;
		while(g1!=1   )
		{
			b1/=g1;
			//cout<<"Enterd loop"<<endl;
			g1=gcd(b1,g);
		}
		//cout<<"come out"<<endl;
		//cout<<a<<" a "<<b<<"  b "<<g<<" g "<<g1<<" g1 "<<endl;
		if(g1==1 and b1!=1)
			printf("No\n");
		else if(g1==1 and b1==1) 
			printf("Yes\n");
		
	}
	return 0;
}
