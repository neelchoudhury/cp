#include<iostream>
#include<time.h>
#define ll long long int

using namespace std;

int main()
{
	clock_t tStart=clock();
	ll n,k,x,sum=0;
	cin>>n>>k;
	while(n--)
	{
		cin>>x;
		
		if(x%k==0)
			sum+=1;
	}
	
	cout<<sum<<endl;
	cout<<"Time taken: "<< (double)(clock() - tStart)/CLOCKS_PER_SEC;
}
