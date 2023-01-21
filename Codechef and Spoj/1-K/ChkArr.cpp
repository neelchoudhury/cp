#include<iostream>
#include<algorithm>

using namespace std;

int max(int a[], int n)
{
	sort(a,a+n);
	int x=a[n-1];
	a[n-1]=0;
	
	return x;	
}

int main()
{
	int a[]={4,3,6,5,8};
	int l=max(a,5);
	cout<<l<<endl;;
	for(int i=0; i<5;++i)
		cout<<a[i]<<" ";
	return 0;
	
}
