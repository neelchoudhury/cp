#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,l;
	int a[105];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &l);
		for(int i=0; i<l; i++)
			scanf("%d", &a[i]);
		int m=a[0], x=1;
		for(int i=1;i<l; i++)
		{
			if(a[i]>m)
			{
				m=a[i];
				x=i+1;
			}
		}
		printf("%d\n", x);
	}
	return 0;
}
