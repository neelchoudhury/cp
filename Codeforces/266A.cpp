#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[55];
	int n;
	cin>>n;
	scanf("%s", a);
	int len=strlen(a);
	int ans=0;
	for(int i=1; i<len; i++)
		if(a[i]==a[i-1])
			ans++;
	cout<<ans<<endl;
	return 0;
}
