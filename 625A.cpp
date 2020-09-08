#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,a,b,c;
	scanf("%I64d %I64d %I64d %I64d", &n, &a,&b, &c);
	//cin>>n>>a>>b>>c;
	ll x=(n-b+c)/(b-c);
	ll y=(n-a)/a;
	y+=(n-y*a)/min(a,b);
	if(min(a,b)==b)
	{	
		int y1,y2;
		y1=(n-y*a)/min(a,b);
		y2=y+y1;
		
		y1=(n-y*a-y1*(b-c))/a;
		y=y+y1;
	}
	 
	 
		//cout<<"qq"<<endl;
		
		x+=(n-x*(b-c))/min(a,b);
	printf("%I64d\n", max(x,y));
	//cout<<max(x,y)<<endl;
	 
	return 0;
}
