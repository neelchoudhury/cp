#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll y,f=0,ff=0;
	cin>>y;
	if(y%400==0 or (y%4==0 and y%100!=0))
		f=1;
	ll ans=0;
	do{
		y+=1;
		if(y%400==0 or (y%4==0 and y%100!=0))
		{
			ff=1;
			ans=(ans+2)%7;
		}
		else
		{
			ff=0;
			ans=(ans+1)%7;
		}
		
	}while(ans!=0 or ff!=f);
	cout<<y<<endl;
}
