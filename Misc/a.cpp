#include<iostream>
#include <cmath>

using namespace std;
int main()
{
	int a[5];
	for(int i = 0 ; i < 5 ; i++)
	{cout<<"Enter a number for array a : ";cin>> a[i];
	}
	
	int z;
	cout<<"Enter the reference number";
	cin>>z;
	
	int b[5];
	for(int i = 0 ; i < 5 ; i++)
	{b[i]=  z- a[i]; b[i]= abs(b[i]);
		}
		
		
		
	for (int i = 1; i < 3 ; i++)
	{
		for(int j=0; j < 4 ; j++)
		{
			
			if(b[j]>b[j+1])
			{
				int t1;
				t1= b[j]; b[j]=b[j+1];b[j+1]=t1;
				
				int t; 
				t= a[j]; a[j]=a[j+1];a[j+1]=t;
			}
		}
		
		
	}	
	
	for(int i = 0 ; i < 5 ; i++)
	{cout<<b[i];
	}
	return 0;
	
}
