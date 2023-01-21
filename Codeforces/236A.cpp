#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[110];
	scanf("%s", a);
	int len=strlen(a);
	sort(a,a+len);
	int cnt=1;
	for(int i=1; i<len; i++)
	{
		if(a[i]!=a[i-1])
			cnt++;
	}
	if(cnt%2)
		cout<<"IGNORE HIM!"<<endl;
	else
		cout<<"CHAT WITH HER!"<<endl;
	return 0;
}
