#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[110];
	cin>>a;
	int len=strlen(a);
	char b[]={"hello"};
	int i=0,j=0;
	for(; i<len; i++)
	{
		if(a[i]==b[j])
		{
			j++;
		}
	}
	if(j<5)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}
