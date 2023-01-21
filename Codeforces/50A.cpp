#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int ans=0;
	if(m==1)
		ans=n/2;
	else if(n==1)
		ans=m/2;
	else 
	{
		int maxi=max(m,n);
		int mini=min(m,n);
		ans=maxi*(mini/2);
		if(mini%2==1)
			ans+=(maxi/2);
	}
	cout<<ans<<endl;
	return 0;
}
