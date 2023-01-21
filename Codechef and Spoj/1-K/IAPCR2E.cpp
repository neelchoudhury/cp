#include<bits/stdc++.h>
#define ll long long int

using namespace std;

//INCOMPLETE

ll a[3];

int main()
{
	
	for(int i=0;i<4; i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a,a+4);
	reverse(a,a+4);
	ll ans=0;
	if(a[0]>3*a[1])
	{
		ans+=a[1];
		a[0]-=3*a[1]	
		a[1]=0;
	}	
	else if(a[0]>2*a[1])
	{
		
	}
}
