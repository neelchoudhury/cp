#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	int ans=0;
	int sum=0;
	for(int i=0;i<m; i++)
		sum+=a[i],ans=min(sum,ans);
	cout<<(-ans)<<endl;
	return 0;
}
