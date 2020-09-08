#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int l[n], r[n];
		for(int i=0; i<n; i++)
		{
			cin>>l[i]>>r[i];
		}
		int a[n];
		for(int i=0; i,n; i++)
		{
			a[i]=1;
		}
		int k=0;
		int lim=0;
		//sort(l,l+n);
		//sort(r,r+n);
		int cnt=0;
		for(int i=0; i<n;i++)
		{
			 
			if(a[i]!=0)
			{
				a[i]=0;
				k+=1;
			}
			for(int j=lim; l[j]<=r[i]; j++)
			{
				 
				 
					a[j]=0;
					lim+=1;
					//cout<<"i: "<<i<<" j: "<<j<<" k: "<<k<<endl;
					 
					
				
			}
		}
		cout<<k<<endl;
	}
	return 0;
}
