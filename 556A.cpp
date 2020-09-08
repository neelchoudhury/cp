#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	char a[n];
	cin>>a;
	int cnt0=0, cnt1=0;
	int len=strlen(a);
	for(int i=0; i<n; i++)
	{
		if(a[i]=='0')
			cnt0++;
		else
			cnt1++;
	}
	cout<<abs(cnt0-cnt1)<<endl;
	return 0;
}
