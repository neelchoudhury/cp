#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second

using namespace std;

char a[5005];
ll dp[5005];

int main()
{
	scanf("%s", a);
	while(strcmp(a,"0"))
	{
		ll len=strlen(a);
		for(ll i=0; i<len; i++)
			dp[i]=0;
		dp[0]=1;
		 
		for(ll i=1; i<len; i++)
		{
			
			if(a[i]!='0')
			{
				//dp[i]=dp[i-1];
				if((  (a[i-1]=='2' and a[i]<='6') or (a[i-1]=='1')) and a[i-1]!='0')
				{
					if(i>1)
						dp[i]= dp[i-1]+dp[i-2];
					else
						dp[i]=dp[i-1]+1;
				}
				else
				{
					dp[i]=dp[i-1];
				}
			}	
			else if(a[i]=='0')
			{
				if(i>1)
					dp[i]=dp[i-2];
				else
					dp[i]=dp[i-1];
			}
		}
		/*for(ll i=0; i<len; i++)
			cout<<dp[i]<<" ";
		cout<<endl;*/
		cout<<dp[len-1]<<endl;
		scanf("%s", a);
	}
	return 0;
}
