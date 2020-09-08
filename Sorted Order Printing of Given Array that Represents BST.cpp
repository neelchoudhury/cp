#include<iostream>

using namespace std;

void f(int a[], int ind, int n)
{
	if(2*ind<=n)
		f(a,2*ind,n);
	cout<<a[ind]<<" ";
	if((2*ind + 1)<=n)
		f(a,2*ind + 1,n);
}

int main()
{
	int a[1000],n;
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	f(a,1,n);
	cout<<endl;
	return 0;
}
