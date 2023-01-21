#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void bubbleSort(int a[], int size)
{
	int temp;
	for(int i=0;i<size; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		} 
	}
}

int main()
{
	int a[]={2,34,34,2,7,3,67,4,33,5,6,6,2,5,4,4,6,4437,8,4,6,7234};
	bubbleSort(a,sizeof(a)/sizeof(int));
	for(int i=0; i<sizeof(a)/sizeof(int);i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
