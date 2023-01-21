#include<bits/stdc++.h>

using namespace std;

void selSort(int a[],int size)
{
	int temp=0;
	for(int i=0; i<size-1; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
}

int main()
{
	int a[5]={2,5,1,3,7};
	selSort(a, 5);
	for(int i=0; i<5; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
