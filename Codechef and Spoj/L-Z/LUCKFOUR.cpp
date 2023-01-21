#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	char a[10];
	cin>>t;
	while(t--)
	{
		scanf("%s", a);
		int cnt=0;
		for(int i=0; i<strlen(a); i++)
		{
			if(a[i]=='4')
				cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}

