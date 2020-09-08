#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	ll a[n][4];
	for(int i=0 ; i<n ;i++)
	{
		cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
	}
	ll attr,id,tm;
	while(m--)
	{
	
		cin>>id>>attr;
		ll v;
		for(int i=0;i<n;i++)
		{
			if(a[i][0]==id&&a[i][1]==attr)
			{
					if(a[i][3]>=tm)
						{
							tm=a[i][3];
							v=a[i][2];
						}
					
			}
		}
		cout<<v<<endl;
	}
	return 0;
}
