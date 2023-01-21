#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int n,a,m;
	while(t--)
	{
		cin>>n>>a>>m;
		int i,cnt;
		for( i=a,cnt=1; cnt<=m;i++,cnt++)
		{
			if(i==n)
				i=0;
		}
		cout<<i<<endl;
	}
	return 0;
}
