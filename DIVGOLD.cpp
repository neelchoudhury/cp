#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n;
	char a[52];
	char b[52];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		scanf("%s", a);
		strcpy(b,a);
		sort(b,b+n);
		int i,j;
		for(i=0;i<n; i++)
		{
			if(a[i]!=b[i])
			{
				for(j=n-1;j>=(i+1);j--)
				{
					if(a[j]==b[j])
						break;
				}
			}
		}
		if(i!=n)
		{
			for(int k=0; k<n; k++)
			{
				if(k<i)
					cout<<a[k];
				else if(k==i)
					cout<<a[j];
				else if(k>i and k<=(j+1))
					cout<<a[k-1];
				else
					cout<<a[k];
			}
		}
		else
		{
			printf("%s", a);
		}
		cout<<endl;
	}
	return 0;
}