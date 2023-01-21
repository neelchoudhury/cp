#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	char a[35];
	scanf("%lld", &t);
	while(t--)
	{
		cin>>a;
		int n=strlen(a);
		int flag=0;
		for(int i=0;i<n-1; i++)
		{
			if(a[i]!=a[i+1])
			{
				 
				if(i==n-2)
				{
					if(flag==1)
						cout<< a[i+1];
					else
						cout<<a[i]<<a[i+1];
				}
				else
				{
					if(flag!=1)
						cout<<a[i];
				}
				flag=0;
			}
			if(a[i]==a[i+1])
			{
				//cout<<"   sat"<<endl;
				if(flag==0)
				{
					flag=1;
					cout<<a[i];
				}
				if(flag==1)
				{
					//cout<<"   sat"<<endl;
					continue;
				}
			}
			
		}
		cout<<endl;
	}
}
