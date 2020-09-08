#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[110];
	scanf("%s", a);
	int len=strlen(a);
	for(int i=0; i<len; i++)
		if(isupper(a[i]))
			a[i]=tolower(a[i]);
	for(int i=0; i<len;i++)
	{
		if(a[i]!='a' and a[i]!='o' and a[i]!='e' and a[i]!='i' and a[i]!='u' and a[i]!='y' )
			cout<<"."<<a[i];
	}
	cout<<endl;
	return 0;
}
