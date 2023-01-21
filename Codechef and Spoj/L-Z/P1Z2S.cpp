#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	int n;
	cin>>n;
	int s=0;
	for( int i=0;i<n; i++)
		cin>>a[i],s+=a[i];
	cout<<max(n,(s+1)/2)<<endl;
	return 0;
}
