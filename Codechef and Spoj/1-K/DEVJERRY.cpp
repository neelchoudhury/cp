#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	int n,sx,sy,ex,ey,bx,by,ans;
	cin>>t;
	while(t--)
	{
		cin>>n>>sx>>sy>>ex>>ey>>bx>>by;
		if(sx==ex )
		{
			if(bx==sx)
				ans=abs(sy-ey)+1 +1;
			else
				ans=abs(sy-ey)+1;
		}
		else if(sy==ey)
		{
			if(by==sy)
				ans=abs(sx-ex)+1+1;
			else
				ans=abs(sx-ex)+1;
		}
		else
		{
			 ans=abs(ex-sx)+abs(ey-sy);
		}
		cout<<ans<<endl;
	}
	return 0;
}
