#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll m,n,k;
	cin>>n>>m>>k;
	ll a[n];
	for(int i=0;i<n; i++)
	{
		cin>>a[i];
	}
	int b[n];
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		for(unsigned int j=0;j<v.size();j++)
		{
			if(a[i]==v[j])
				break;
		}
		for(int j=i; j<n; j++)
		{
			if(j==i)
				b[j]=0;
			else
			{
				if(a[j]==a[i])
				b[j]=(j-i);
				v.push_back(a[j]);
			}
		}
	}
	int l,r;
	while(k--)
	{
		cin>>l>>r;
		int max=0;
		for(int i=r-1;i>=l-1; i--)
		{
			 if(b[i]<=i-l and max<b[i])
			 	max=b[i];
		}
		cout<<max<<endl;
	}
	return 0;
	
}
