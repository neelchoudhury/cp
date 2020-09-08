#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[2005];
	for(int i=1; ; i++)
	{
		scanf("%s", a);
		if(a[0]=='-')
		{
			break;
		}
		else
		{
			int c1=0,c0=0,ans=0;
			int l=strlen(a);
			for(int i=0;i <l;i++)
			{
				if(a[i]=='{')
					c1++;
				else
				{
					if(c1>0)
					{
						c1--;
					}
					else
					{
						ans++;
						c1++;
					}
				}
			}
		 	ans+=(c1/2);
			printf("%d. %d\n",i,ans);
		}
	}
	return 0;
}
