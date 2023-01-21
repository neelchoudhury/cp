#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int t;
	char a[41];
	int b[8]={0,0,0,0,0,0,0,0};
	cin>>t;
	int i=0;
	while(t--)
	{
		cin>>i;
		for(int j=0;j<8; j++)
			b[j]=0;
		scanf("%s",a);
		for(int i=0;i<38;i++)
		{
			if(a[i]=='T' and a[i+1]=='T' and a[i+2]=='T')
				b[0]++;
			else if(a[i]=='T' and a[i+1]=='T' and a[i+2]=='H')
				b[1]++;
			else if(a[i]=='T' and a[i+1]=='H' and a[i+2]=='T')
				b[2]++;
			else if(a[i]=='T' and a[i+1]=='H' and a[i+2]=='H')
				b[3]++;
			else if(a[i]=='H' and a[i+1]=='T' and a[i+2]=='T')
				b[4]++;
			else if(a[i]=='H' and a[i+1]=='T' and a[i+2]=='H')
				b[5]++;
			else if(a[i]=='H' and a[i+1]=='H' and a[i+2]=='T')
				b[6]++;
			else if(a[i]=='H' and a[i+1]=='H' and a[i+2]=='H')
				b[7]++;
		}
		cout<<i<<" ";
		for(int i=0;i<8; i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}
