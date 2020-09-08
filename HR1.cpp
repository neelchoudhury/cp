#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
	int t=10;
	vector<int> v;
	while(t--)
	{
		int a;
		scanf("%d",&a);
		v.pb(a);
	}
	sort(v.begin(),v.end());
	cout<<v[9]+v[7]+v[5]<<endl;
	return 0;
}
