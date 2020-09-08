#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n;
	char s[110];
	cin>>n;
	while(n--)
	{
		scanf("%s", s);
		int len=strlen(s);
		if(len<=10)
			cout<<s<<endl;
		else
			cout<<s[0]<<len-2<<s[len-1]<<endl;
	}
	return 0;
}
