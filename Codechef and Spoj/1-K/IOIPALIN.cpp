#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
#define ll long long int

using namespace std;

ll dp[2][5010],N;
char a[5010],b; 

int solve()
{
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if(a[i-1]==a[N-j])
            {
                dp[i%2][j]= 1+dp[(i-1)%2][j-1];
            }
            else
            {
                dp[i%2][j]=max(dp[(i-1)%2][j], dp[i%2][j-1]);
            }
        }
    }
    return dp[N%2][N];
}

int main()
{
	ll d; 
	scanf("%lld", &N);
	memset(dp, 0, sizeof(dp)); 
	scanf("%s", a);	 
	ll ans=solve();
	printf("%lld\n", N-ans);
	return 0;
}
