#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	string s1,s2,s3;
	cin>>t;
	ll ans=0,cnt=0;
	while(t--)
	{
		cin>>n;
		ans=0,cnt=0;
		cin>>s1;
		cin>>s2;
		cin>>s3;
		for(ll i=0; i<n; i++)
		{
			cnt=0;
			for(ll j=0; j<3; j++)
			{
				if(s1[3*i+j]=='*' )
				{
					cnt+=4;
				}
				if(s3[3*i+j]=='*')
				{
					cnt+=4;
				}
				if(j!=1 and s2[3*i+j]=='*')
				{
					cnt+=4;
				}
			}
			ans=max(ans,cnt);
		}
		cout<<ans<<endl;
	}
	return 0;
}
