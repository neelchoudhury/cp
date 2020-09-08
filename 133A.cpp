#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[110];
	scanf("%s", a);
	int flag=0;
	int len=strlen(a);
	for(int i=0; i<len; i++)
	{
		if(a[i]=='H' or a[i]=='Q' or a[i]=='9'  )
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
