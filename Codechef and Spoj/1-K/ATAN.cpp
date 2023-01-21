#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define PI 3.14

using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	ld ans=atan(y/(ld)x)*180/PI;
//	ans=((ans)>(int)ans+.5?(int)ans+1:(int)ans);
	cout<<(int)ans<<endl;
	return 0;
}
