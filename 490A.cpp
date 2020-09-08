#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld\n",a)
#define MOD 1000000007
 
using namespace std;

vector<int> v[3];

int main()
{
	//ios;
	int n,x;
	cin>>n;
	for(int i=0;i<n; i++)
	{
		cin>>x;
		v[x-1].push_back(i+1);
	}
	if(v[0].size()==0 or v[1].size()==0 or v[2].size()==0)
	{
		cout<<0<<endl;
	}
	else
	{
		int w=min(v[0].size(),min(v[1].size(),v[2].size()));
		cout<<w<<endl;
		for(int i=0; i<w; i++)
		{
			cout<<v[0][i]<<" "<<v[1][i]<<" "<<v[2][i]<<endl;
		}
	}
	return 0;
}
