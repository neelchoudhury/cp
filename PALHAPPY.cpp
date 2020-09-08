#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	char a[1001];
	cin>>t;
	while(t--)
	{
		scanf("%s", a);
		int l=strlen(a);
		int cnt=0;
		for(int i=0,j=l-1; i<=j; i++,j--)
		{
			if(a[i]!=a[j])
				cnt++;
		}
		if(cnt>1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
	return 0;
}
