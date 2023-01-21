#include<bits/stdc++.h>

using namespace std;

void insSort(int a[], int size)
{
	int temp;
	for(int i=0; i<size; i++)
	{
		int j;
		for( j=i; j>0  ; j--)
		{
			 if(a[j]<a[j-1])
			 {
			 	temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			 }
		}
		
	}
}

int main()
{
	int a[]={2,4,1,5,3,6,34,11,8,5};
	insSort(a,sizeof(a)/sizeof(int));
	for(int i=0; i<sizeof(a)/sizeof(int);i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
