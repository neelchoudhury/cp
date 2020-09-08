#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
	int t;
	cin>>t;
	char s[100000];
	while(t--)
	{
		scanf("%s",s);
		if(strstr(s,"101") or strstr(s,"010"))
			cout<<"Good"<<endl;
		else
			cout<<"Bad"<<endl;
	}
	return 0;
}
