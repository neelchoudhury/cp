#include<bits/stdc++.h>

using namespace std;

int main()
{
 
	int n;
	cin>>n;
	char a[n];
	scanf("%s", a);
	int cnt=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]=='.')
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
