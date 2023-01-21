#include<iostream>
#include<cmath>
using namespace std;


int comb(int arr[],int i, int j)
{
	/*if(j!=i)
	cout<<arr[i]<<arr[j];*/
	if(i>2)
	{
		return 0;
	}
	if(j==i)
	{
		return comb(arr,i+1,3);
	}
	if(j!=i)
	{
	
		return cout<<arr[i]<<arr[j]<<endl and comb( arr, i,j-1)  ;
	}
}

int main()
{
	int arr[4];
	int a,b;
	cin>>a;
	for(int i=1; i<=4;i++)
	{
		arr[4-i]=a%10;
		a/=10;
	}
	//cout<<endl<<arr[0]<<arr[1]<<arr[2]<<arr[3];
	b=comb(arr,0,3);
	return 0;
}
