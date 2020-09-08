#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[11];
	scanf("%s", a);
	int n=strlen(a);
	int f=0;
	for(int i=0; i<n; )
	{
		if(a[i]=='1')
		{
			//cout<<i<<" ddone ";
			if(i+1<n and a[i+1]=='4')
			{
				//cout<<i<<" vv ";
				if(i+2<n and a[i+2]=='4')
				{
					i+=3;
				}
				else 
				{
					//cout<<" gg "<<i<<endl;
					i+=2;
				}
				//cout<<i<<" vv ";
			}
			else
			{
				i+=1;
			}
			//cout<<i<<endl;
		}
		else
		{
			//cout<<i<<endl;
			f=1;
			break;
		}
	}
	if(f==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
