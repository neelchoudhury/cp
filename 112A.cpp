#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[110];
	char b[110];
	int len=0,len1=0,len2=0;
	scanf("%s", a);
	scanf("%s", b);
	len=strlen(a);
	int flag=0;
	for(int i=0; i<len; i++)
	{
		a[i]=tolower(a[i]);
		 
		b[i]=tolower(b[i]);
		if(a[i]<b[i])
		{
			flag=-1;
			break;
		}
		else if(a[i]>b[i])
		{
			flag=1;
			break;
		}
	}
	cout<<flag<<endl;
	return 0;
}
