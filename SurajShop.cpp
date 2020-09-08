#include<iostream>
#include<algorithm>
#include<cstdio>
#define ll long long 

using namespace std;

int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
			//cout<<"a array"<<endl;
		/*for(int i=0;i <n; i++)
			cout<<a[i]<<" ";
		cout<<endl;*/
		sort(a,a+n);
		int b[n];
		for(int i=0; i<n; i++)
			b[i]=a[n-1-i];
		//cout<<"b array"<<endl;
		/*for(int i=0;i <n; i++)
			cout<<b[i]<<" ";
		cout<<endl;*/
		ll sum=0;
	 	for(int i=0;i<n ; i++)
	 	{
	 	 	if(i%4==0 or i%4==1)
	 	 		{
	 	 			sum+=b[i];
	 	 			//cout<<i<<" ";
	 	 		}
	 	 
	 	}
		printf("%lld\n",sum);
		
	}
	return 0;
	
}

