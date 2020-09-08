#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	ll b[n];
	for(int i=0; i<n; i++)
		cin>>b[i];
	ll a[n];
	a[0]=b[0];
	int j1=1;
	for(int i=1; i<n; i++)
	{
		if(b[i]>=b[i-1])
			a[j1++]=b[i];
	}
	/*for(int i=0; i<n; i++)
		cout<<a[i]<<" ";*/
	cout<<endl;	
	int cnt=0,flag=0;
	for(int i=0; i<j1-2; i++)
	{
		for(int j=i+1; j<j1-1; j++)
		{
			flag=0;
			if(a[j]>a[i]*k)
				break;
			else if(a[j]==a[i]*k)
			{
				//cout<<"SAti "<<a[j]<<" "<<i<<" "<<j<<endl;
				for(int q=j+1; q<j1; q++)
				{
					//cout<<a[q]<<endl;
					if(a[q]>a[j]*k)
					{
						
						flag=1;break;
					}
					else if(a[q]==a[j]*k){
						//cout<<"Sat"<<endl;
						cnt++;
						//cout<<i<<" "<<j<<" "<<q<<endl;
						//flag=1;break;
					}
				}
			}
			 
		}
	}
	cout<<cnt<<endl;
	return 0;
}
