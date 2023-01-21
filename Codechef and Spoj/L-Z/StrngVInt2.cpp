#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
	int t;
	char l[10001];
	char m[10001];	
	cin>>t;
	while(t--)
	{
		 
		cin.sync();
		cin.getline(l,10000);
		int x=strlen(l);
		int cnt=0;
		for(int i=0;i<x; i++)
		{
			 
			if(l[i]<48 or l[i]>57)
			{
				m[cnt]=l[i];
				cnt++;	
			}
				
		}
		for(int i=0; i<cnt;i++)
		{
			if(i==0 and m[0]==32)
			{
				
				continue;
			}
			else
			{
				cout<<m[i];
				if(m[i]==32)
				{
					while(m[i]==32)
					i++;
				}
				
			}
			
		}
		cout<<endl;
	}
	return 0;
}
