#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	char c[100001];
	cin>>c;
	while(t--)
	{
		scanf("%s", c);
		int x=strlen(c);
		int a[x];
		for(int i=0; i<x; i++)
		{
			if(c[i]=='+')
				a[i]=1;
			else
				a[i]=0;
		}
		int cnt=1;
		int chn=0;
		int j=0,k=0;
		int f=0;
		for(int i=1; i<x;i++)
		{
			if(a[i]==a[i-1])
			{
				cnt++;
				if(f==0)
				{
					j=i;
					f=1;
				}
			}
			else
			{
				k=i;
				if(cnt>1)
					{
						if(cnt%2!=0)
							chn+=(cnt/2);
					}
				else
				{
					if(i!=0 or j!=x-1)
					{
						if()	
					}
				}
				f=0;
				cnt=1;
			}
			cout<<cnt<<endl;
			if(i=x-1)
			{
				chn+=(cnt/2);
			}
		}
		cout<<chn<<endl;
	}
	return 0;
}
