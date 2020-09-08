#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

ld d(ld a, ld b, ld x,ld y)
{
	return sqrt((a-x)*(a-x)+(b-y)*(b-y));
}

int main()
{
	ld a,b,n,x,y,v, ans=INT_MAX;
	cin>>a>>b;
	cin>>n;
	while(n--)
	{
		cin>>x>>y>>v;
		ans=min(ans,(d(x,y,a,b))/v);
	}
	cout<<setprecision(12)<<ans<<endl;
	return 0;
}
