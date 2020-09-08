#include<iostream>
#include<cmath>
using namespace std;


int perm(int arr[],int i, int j)
{
	/*if(j!=i)
	cout<<arr[i]<<arr[j];*/
	if(i>3)
	{
		return 0;
	}
	if(j==i)
	{
		return perm(arr,(j>=3?i+=1:i),(j>=3?j-3:j+1));
	}
	if(j!=i  )
	{
	
		return cout<<arr[i]<<arr[j]<<endl and perm( arr,j>=3?i+=1:i,j>=3?j-3:j+1)  ;
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
	b=perm(arr,0,1);
	return 0;
}
