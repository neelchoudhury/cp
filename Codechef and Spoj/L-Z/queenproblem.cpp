#include<iostream>
using namespace std;
int j=0,count=0;int n=0;
void queen(char a[][3],int n);

int main()
{
	int n=3;
	//cout<<"Enter the value of n -";
	//cin>>n;
	char p[3][3];
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		p[i][j]='_';
	}
	queen(p,n);
	cout<<count<<endl;
	return 0;
}

void queen(char a[][3],int n )
{
	int i=0;
	while((i<n)&&(j<n))
	{
		if(a[i][j]!='0')
		{
			a[i][j]='Q';
			int x=i+1,y=j+1;
			while(x<n&&y<n)
			{
				a[x][y]='0';
				x++,y++;
			}
			x=i-1,y=j+1;
			while(x>=0&&y<n)
			{
				a[x][y]='0';
				x--,y++;
			}
			for(int t=j+1;t<n;++t)
			a[i][t]='0';
			
			j=j+1;
			if(j==n)
			count=count+1;
			else
			{
		    	queen(a,n);
				for(int k=0;k<n;++k)
				{
					for(int s=j;s<n;++s)
					a[k][s]='_';
				}
			}
		}
		++i;
	}
}
