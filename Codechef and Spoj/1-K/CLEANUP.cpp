#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int a[m];
		for(int i=0; i<m; i++)
			cin>>a[i];
		sort(a,a+m);
		int b[n];
		memset(b,0,sizeof(b));
		for(int i=0; i<n; i++)
			b[i]=i+1;
		int j=0;
		for(int i=0;i<n and j<m; i++)
		{
			if(b[i]==a[j])
			{
				b[i]=0;
				j++;
			}
		}
		int f=0;
		vector<int>chef,asst;
		
		for(int i=0;i<n; i++)
		{
			if(b[i]!=0 and f==0)
			{
				f=1;
				chef.push_back(b[i]);
			}
			else if(b[i]!=0 and f==1)
			{
				f=0;
				asst.push_back(b[i]);
			}
		}
		for(int i=0; i<chef.size(); i++)
			cout<<chef[i]<<" ";
		cout<<endl;
		for(int i=0; i<asst.size(); i++)
			cout<<asst[i]<<" ";
		cout<<endl;
	}
	return 0;
}
