#include<bits/stdc++.h>

using namespace std;

int main()
{
	int s,b;
	int l,r;
	scanf("%d %d", &s, &b);
	int a[s][2];
	a[0][0]=-1;
	if(s!=1)
	a[0][1]=2;
	else
		a[0][1]=-1;
	for(int i=1; i<s-1; i++)
	{
		a[i][0]=i;
		a[i][1]=i+2;
	}
	int n=s;
	//cout<<a[0][0]<<endl;
	if(s!=1)
	a[s-1][0]=s-1;
	else
		a[0][0]=-1;
	a[s-1][1]=-1;
 
	while(b--)
	{
		 
		scanf("%d %d",&l, &r);
		 
		if(l!=1 and r!=s)
		{
		a[l-2][1]=a[r-1][1];
		a[r][0]=a[l-1][0];
		}
		if(l==1)
		a[r][0]=-1;
		if(r==s)
		a[l-2][1]=-1;
		if(a[l-1][0]==-1)
			printf("* ");
		else
			printf("%d ", a[l-1][0]);
		if(a[r-1][1]==-1)
			printf("*\n");
		else
			printf("%d\n", a[r-1][1]);
	}
	printf("-\n");
	return 0;
}
