#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pb push_back
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a, 0, sizeof(a))

using namespace std;

int main()
{
	ios;
	ll a,b;
	cin>>a>>b;
	ll min=a-b;
	ll max=a+b;
	if(b==0||b>a)
		cout<<(-1)<<endl;
	else if(a==b)
	{
	 
		cout<<setprecision(12)<<a*1.0<<endl;
	}
	else 
	{
		ld ans1,ans2;
		ans1=(min*1.0)/2.0;
		ans2=(max*1.0)/2.0;
		ld x,y;
		x=ans1/(b*1.0);
		y=ans2/(b*1.0);
		//cout<<x<<" "<<y<<endl;
		x=floor(x);
		y=floor(y);
		ans1=ans1/x;
		ans2=ans2/y;
		if(ans1-ans2>0)
		{
		 
		cout<<setprecision(12)<<ans2<<endl;
		}
		else
		{
			 
		cout<<setprecision(12)<<ans1<<endl;
		}
	}
	return 0;
}
