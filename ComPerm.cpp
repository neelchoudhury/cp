#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	char a[1001], b[1001];
	
	do
	{
		scanf("%s",a);
		scanf("%s",b);
		char c[1001];
		int x=strlen(a);
		int y=strlen(b);
		int k=0;
		for(int i=0; i<x; i++)
		{
			for(int j=0;j<y;j++)
			{
				if(a[i]==b[j])
				{
					c[k]=a[i];
					k++;
				}
			}
		}
		int p=strlen(c);
		int z[strlen(c)];
		for(int i=0; i<p; i++)
		{
			z[i]=(int)c[i];
		}
		char d[p];
		sort(z,z+p);
		d[0]=(char)z[0];
		//cout<<"Before for"<<endl;
		for(int i=1,j=1;i<p; i++)
		{
			//cout<<"Entered for"<<endl;
			if(z[i]!=z[i-1])
			{
				//cout<<"Entered if"<<endl;
				d[j]=(char)z[i];
				j++;
				//cout<<" "<<i<<" "<<j<<""<<d[j]<<endl;
			}
		}
		printf("%s\n", d);
		
		
	}while(cin.get()=='\n');
	return 0;
}
