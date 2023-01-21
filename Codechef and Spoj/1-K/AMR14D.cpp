#include<bits/stdc++.h>

using namespace std;

int a[1010];

int main()
{
	
	int t,n,x,f=0;
	scanf("%d", &t);
	while(t--)
	{
		f=0;
			scanf("%d", &n);
			for(int i=0; i<n;i ++)
				a[i]=-1;
			for(int i=0; i<n; i++)
			{
				cin>>a[i];
				 
			}	
			sort(a,a+n);	
			for(int i=1; i<n; i++)
			{
				if(a[i]==a[i-1])
				{
					f=1;
					break;
				}
			}
			
			if(f==1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	}
	
	return 0;
}
