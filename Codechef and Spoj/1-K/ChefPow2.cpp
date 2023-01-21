#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	scanf("%lld", &n);
	int i=0;
	//cout<<"Entering loop "<<endl;
	while(n!=0)
	{
	//	cout<<"Entered loop n, i"<<n<<" "<<i<<endl;
		if(n%10 & 1)
		{
			cout<<pow(2,i)<<" ";
		}
		i+=1;
		//cout<<"n before "<<n<<endl;
		n=n>>1;
	//	cout<<"n after "<<n<<endl;
		
	}
	return 0;
}
