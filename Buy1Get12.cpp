#include<iostream>

using namespace std;

int main()
{
	int t;
	char s[201];
	int a[255];
	
	cin>>t;
	while(t--)
	{
		cin>>s;
		for(int i=0;i <255; i++)
			a[i]=0;
		for(int i=0; s[i]!='\0'; i++)
			a[(int)s[i]]++;
		int cnt=0;
		for(int i=0; i<255; i++)
			cnt+=(a[i]+1)/2;
		cout<<cnt<<endl;
		
	}
	return 0;
}
