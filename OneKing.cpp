#include<iostream>
#include<algorithm>
#define ll long long int

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
		int k=0;
		int lim=0;
		sort(l,l+n);
		sort(r,r+n);
		int cnt=0;
		for(int i=0; i<n;i+=cnt)
		{
			cnt=0;
			for(int j=lim; l[j]<=r[i]; j++)
			{
				//cout<<"i: "<<i<<" j: "<<j<<" k: "<<k<<endl;
				 	if(cnt==0)
						k+=1; 
					lim+=1;
					//cout<<"i: "<<i<<" j: "<<j<<" k: "<<k<<endl;
					cnt++;
					
			
				//cout<<"Limit: "<<lim<<endl;
			}
		}
		cout<<k<<endl;
	}
	return 0;
}
