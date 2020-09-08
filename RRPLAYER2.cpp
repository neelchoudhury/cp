#include<bits/stdc++.h>
#define ld long double

using namespace std;

int main()
{
	int t,n;
	ld ans=0;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		ld s=0;
		for(int i=1; i<=n;i++)
		{
			s+=(1/(ld)i);
			//cout<<s<<" ";
		}
		ans=s*n;
		cout<<ans<<endl;
	}
	return 0;
}
