#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	ll a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int cnt=0,flag=0;
	for(int i=0; i<n-2; i++)
	{
		for(int j=i+1; j<n-1; j++)
		{
			flag=0;
			/*if(a[j]>a[i]*k)
				break;*/
			 if(a[j]==a[i]*k)
			{
				//cout<<"SAti "<<a[j]<<" "<<i<<" "<<j<<endl;
				for(int q=j+1; q<n; q++)
				{
					//cout<<a[q]<<endl;
					/*if(a[q]>a[j]*k)
					{
						
						flag=1;break;
					}*/
					 if(a[q]==a[j]*k){
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
