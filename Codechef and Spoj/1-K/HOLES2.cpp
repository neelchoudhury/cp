#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	char a[101];
	cin>>t;
	while(t--)
	{
		scanf("%s", a);
		int cnt=0;
		for(int i=0; i<strlen(a); i++)
		{
			if(a[i]=='B')
				cnt+=2;
			else if(a[i]=='A' or a[i]=='D' or a[i]=='O' or a[i]=='P' or a[i]=='R' )
				cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
