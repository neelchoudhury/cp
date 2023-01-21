#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	int c,s,k;
	ll cnt=0;
	ll a[50][50][100];
	for(int i=0;i<50; i++)
	{
		for(int j=0; j<50; j++)
		{
			for(int kk=0; kk<100;kk++)
				a[i][j][kk]=0;
		}
	}
	for(int i=0;i<50; i++)
	{
		for(int j=0; j<50; j++)
		{
			for(int kk=0; kk<100;kk++)
			{
				if(j==0)
				{
					cnt=0;
					ll x;
			 		if(kk==i)
		 				cnt=3;
			 		else if(kk<i)
				 	{
				 		x=(ll)pow(2,i-kk);
				 		while(x>=1)
				 		{
				 			cnt+=x;
				 			x/=2;
				 		}
				 		cnt+=2;
				 	}
				 	a[i][j][kk]=cnt;
				}
				else if(kk==1)
				{
					cnt=0;
					if(i<=j)
					{
						if(j>0)
						{
							if(i==0)
							{
								for(int m=1; m<=j; m++)
								{
									cnt+=(ll)pow(2,m);
								}
							}
							else
							{
								for(int m=i; m<=j; m++)
								{
									cnt+=(ll)pow(2,m);
								}
							}
						}
						if(i>0)
						{
							cnt+=(ll)pow(2,i);
							cnt+=1;
						}
					}
					a[i][j][k]=cnt;
				}
			}
		}
	}
	cin>>t;
	while(t--)
	{
		cin>>s>>c>>k;
		printf("%lld\n", a[s][c][k-1]);
		
	}
	return 0;
}
