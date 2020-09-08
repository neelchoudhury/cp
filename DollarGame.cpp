#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int x;
	cin>>x;
	char a[1000];
	scanf("%s", a);
	for(int i=0; a[i]!='\0'; i++)
	{
		if(a[i]=='W')
		{
			x=2*x +11;
		}
		else
		{
			x=(x+1)/2;
		}
	}
	cout<<x<<endl;
	return 0;
}
