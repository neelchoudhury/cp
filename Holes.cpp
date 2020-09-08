#include<iostream>
#include<cstring>

using namespace std;

char zero[]={"CEFGHIJJLMNSTUVWXYZ"};
char one[]={"ADOQRD"};
char two[]={"B"};

int main()
{
	int t;
	cin>>t;
	char a[100];
	while(t--)
	{
		int sum=0;
		cin>>a;
		for(int i=0; i<strlen(a);i++)
		{
			/*if(strchr(zero,a[i]))
			{
				sum+=0;
			}*/
			  if((a[i]=='A') || (a[i]=='D') || (a[i]=='O') || (a[i]=='P') || (a[i]=='Q') || (a[i]=='R'))
			{
				sum+=1;
			}
			else if(a[i]=='B')
			{
				sum+=2;
			}	
		}
		//sum+=1;
		cout<<sum<<endl;
	}
	return 0;
	
}
