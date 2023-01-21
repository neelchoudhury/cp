#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	//cout<<endl;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			a[i][j]=0;
	}
	int sum=1;
	int flag=0;
	int i=0,j=0;
	int ping =0;
	for(int k=1;k<=(n*n);k++)
	{
		
		if(sum>=4 and sum%4==0)
		{
			sum++;
			flag=0;
			ping =1;
			
		}
		if(sum>=4 and sum%4==1)
		{
			sum++;
			flag=1;
			ping=1;
		}
		if(ping ==0 and a[i][j]==0 and i<n and j<n)
		{
			if(flag==0)
			{
				cout<<"flag 0 j: "<<j<<endl;
				a[i][j]=k;
				j++;
			}
			else if(flag==1)
			{
				cout<<"f 1 i:  "<<i<<endl;
				a[i][j]=k;
				i++;
			}
			else if(flag==2)
			{
				cout<<"f 2 i:  "<<j<<endl;
				a[i][j]=k;
				j--;
			}
			else
			{
				cout<<"f 3 j:  "<<i<<endl;
				a[i][j]=k;
				i--;
			}
		}
		else
		{
			k-=1;
			sum++;
			ping =0;
			if(flag==3)
			{
				cout<<"3 c i:"<<i<<" j: "<<j<<endl;
				flag=0;
				i+=1;
				j+=1;
				
			}
			else if(flag==0)
			{
				cout<<"0 c"<<endl;
				flag++;
			 	i+=1;
			 	j-=1;
				
			}
			else if(flag==1)
			{
				cout<<"1 c"<<endl;
				flag++;
			 	i-=1;
			 	j-=1;
			}
			else
			{
				cout<<"2 c"<<endl;
				flag++;
			 	i-=1;
			 	j+=1;
			}
		}
		
			for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	}
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
