#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	char a[1010];
	cin>>t;
	while(t--)
	{
		cin>>a;
		int ans=0;
		ans=strlen(a)+1;
		for(int i=1; i<strlen(a); i++)
		{
			if(a[i]>=a[i-1])
			{
				ans+=(a[i]-a[i-1]);
			}
			else
			{
				ans+=(26-(a[i-1]-a[i]));
			}
		}
		//cout<<ans<<endl;
		if(ans<=11*strlen(a))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
