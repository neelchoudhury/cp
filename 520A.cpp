#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	char a[t];
	scanf("%s", a);
	for(int i=0; a[i]!='\0'; i++)
	{
		if(isupper(a[i]))
			a[i]=tolower(a[i]);
	}
	sort(a,a+t);
	int cnt=1;
	for(int i=1; a[i]!='\0'; i++)
	{
		if(a[i]>a[i-1])
			cnt++;
	}
	if(cnt==26)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
