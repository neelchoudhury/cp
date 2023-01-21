#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(int i=0;i<n; i++)
		cin>>a[i];
	/*int tmp;
	for(int i=0; i<n/2; i++)
	{
		tmp=a[n-1-i];
		a[n-1-i]=a[i];
		a[i]=tmp;
	}*/
	/*for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;*/
	ll cnt=0;int flag=0,flag2=0;
	for(int i=0; i<n;i++)
	{
		//cout<<"doing"<<endl;
		 if(i<k-1)
		 {
			if(a[i]!=0)
				 cnt++;
			else
			{
				flag=1;
				break;
			}
		 }
	 
		if(i==k-1)
		{	if(a[i]!=0)
				 cnt++;
		 	while(a[i]!=0 and a[i]==a[i+1])
		 		cnt++,i++;
		 	
		 	flag=1;
			
		}
		if(flag)
			break;
		//cout<<cnt<<" ";
	}
	cout<<cnt<<endl;
	return 0;
}
