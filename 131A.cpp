#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[110];
	scanf("%s", a);
	int len=strlen(a);
	int flag1=0, flag2=0;
	 
	int cnt=0;
	for(int i=1; i<len; i++)
	{
		if(isupper(a[i]))
			cnt++;
		else
			break;
	}
	if(cnt==len-1)
		flag2=1;
	if(flag2==1)
	{
		if(isupper(a[0]))
			cout<<(char)tolower(a[0]);
		if(islower(a[0]))
			cout<<(char)toupper(a[0]);
		for(int i=1;i<len; i++)
		{
			cout<<(char)tolower(a[i]);
		}
	}
	else
		cout<<a;
	cout<<endl;
	return 0;
}
