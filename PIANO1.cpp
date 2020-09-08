#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	char s[101];
	int n;
	int x=0;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", s);
		scanf("%d", &n);
		x=0;
		for(int i=0; s[i]!='\0'; i++)
		{
			if(s[i]=='T')
				x+=2;
			else
				x+=1;
		}
		int i=0;
		int sum=0;
		while(i<(12*n-x))
		{
			int y=(12*n-i);
			int z=(y-(x+1))/x;
			sum+=(z+1);
		//	cout<<(z+1)<<" ";
			i++;
		}
	//	cout<<endl;
		printf("%d\n", sum);
	}
	return 0;
}
