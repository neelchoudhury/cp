#include<iostream>
#include<cmath>
//#include<algorithm>
#define ll long long int

using namespace std;


int main()
{
	ll t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll b[n];
		ll a[m];
		for(int i=0; i<m;i++)
		{
			cin>>a[i];
			for(int j=0; j<n;j++)
			{
				
				(i==0?b[j]=abs(j-a[i]):(abs(j-a[i])>b[j]?(b[j]=abs(j-a[i])):b[j]));
				if(i==m-1)
				{
					cout<<b[j]<<" ";
				}
			}
		}
	 
		
	 
		cout<<endl;
	}
}
