#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
	int t;
	char l[10001];	
	cin>>t;
	while(t--)
	{
		//scanf("%s", l);
		//char l[10001];
		//cin.clear();
		//cin.ignore(10000,'\n');
		cin.sync();
		cin.getline(l,10000);
		int x=strlen(l);
		for(int i=0;i<x; i++)
		{
			//if(l[i-1]>=48 and l[i-1]<=57 and (l[i]==32))
			//	continue;
			if(l[i]==32 and (l[i+1]>=48 and l[i+1]<=57)and  !(l[i-1]>=48 and l[i-1]<=57))
				continue;
			if(l[i]<48 or l[i]>57)
				cout<<l[i];
				
		}
		cout<<endl;
	}
	return 0;
}
