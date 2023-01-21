#include<iostream>
#include<cstring>
#include<cmath>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	char a[400];
	while(t--)
	{
		cin>>a;
		int l=strlen(a);
		for(int i=0; i<l; i++)
		{
			if(a[i]=='(')
			{
				if(a[i+1]>='a' and a[i+1]<='z')
				{
					++i;
					cout<<a[i];
				}
				else if (a[i+1]=='(')
				{
					continue;
				}
			}
			if(a[i]>='a' and a[i]<='z' )
			{
				if(a[i+1]=='+' or a[i+1]=='-' or a[i+1]=='*' or a[i+1]=='/' or a[i+1]=='^')
				{
					
						i+=2;
						cout<<a[i];
				}
				else
				{
					continue;
				}
				
			}
			if(a[i]==')')
			{
				for(int j=i; j<l; j++)
				{
					if(a[j]==')')
					{
						cout<<a[i-(pow(2,2*(j-i))+1)];
					}
					else
					{
						continue;
					}
				}
			
			}
		}
		cout<<endl;
	}
	return 0;
}
