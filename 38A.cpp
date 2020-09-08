#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a,b;
	int arr[103];
	cin>>n;
	for(int i=1;i<n; i++)
		cin>>arr[i];
	cin>>a>>b;
	int ans=0;
	for(int i=a; i<b; i++)
		ans+=arr[i];
	cout<<ans<<endl;
	return 0;
}
