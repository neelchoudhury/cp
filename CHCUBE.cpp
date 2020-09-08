#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	char a[6][10];
	cin>>t;
	int b[6];
	while(t--)
	{
		memset(b,0,sizeof(b));
		for(int i=0; i<6; i++)
		{
			cin>>a[i]; 
		}
		int flag=0;
	 
			for(int j=0; j<=1; j++)
			{
				if(j==0)
				{
				if(!strcmp(a[j%6],a[(j+2)%6]) and !(strcmp(a[j%6],a[(j+4)%6])))
					flag=1 ;
				else if(!strcmp(a[j%6],a[(j+2)%6]) and !(strcmp(a[j%6],a[(j+5)%6])))
					flag=1 ;
				else if(!strcmp(a[j%6],a[(j+3)%6]) and !(strcmp(a[j%6],a[(j+4)%6])))
					flag=1 ;
				else if(!strcmp(a[j%6],a[(j+3)%6]) and !(strcmp(a[j%6],a[(j+5)%6])))
					flag=1 ;
				}
				else
				{
					if(!strcmp(a[j%6],a[(j+1)%6]) and !(strcmp(a[j%6],a[(j+3)%6])))
					flag=1 ;
				else if(!strcmp(a[j%6],a[(j+1)%6]) and !(strcmp(a[j%6],a[(j+4)%6])))
					flag=1 ;
				else if(!strcmp(a[j%6],a[(j+2)%6]) and !(strcmp(a[j%6],a[(j+3)%6])))
					flag=1 ;
				else if(!strcmp(a[j%6],a[(j+2)%6]) and !(strcmp(a[j%6],a[(j+4)%6])))
					flag=1 ;	
				}
			}
			 
		 
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
