#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool dp[1010][1010];

int main()
{
	ll q;
	string a,b;
	cin>>q;
	while(q--)
	{
		memset(dp,0,sizeof(dp));
		cin>>a>>b;
		transform(a.begin(),a.end(),a.begin(),::tolower);
		transform(b.begin(),b.end(),b.begin(),::tolower); 
		for(ll i=0;i<a.length(); i++)
		{
			for(ll j=0; j<b.length(); j++)
			{
				if(i==0)
				{
					dp[i][j]=0;
				}
				else if(j==0)
				{
					dp[i][j]=(a[i]==b[j]) or (dp[i-1][j]);
				}
				else
				{
					dp[i][j]=((a[i]==b[j]) and (dp[i-1][j-1]))or((a[i]!=b[j])and (a[i][j-1]or a[i-1][j]));
				}
			}
		}
		if(dp[a.length()-1][b.length()-1])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
