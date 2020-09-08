#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[110];
	scanf("%s", a);
	int cnt=1;
	int len=strlen(a);
	int flag=0;
	for(int i=1;i<len; i++)
	{
		if(a[i]==a[i-1])
			cnt++;
		else
			cnt=1;
		if(cnt==7)
		{
			flag=1;
			break;
		}
			
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
