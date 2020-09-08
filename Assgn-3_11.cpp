#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int s[5][4];
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<4; j++)
			s[i][j]=0;
	}
	int no;
	int x;
	cout<<"Enter the number of days in month: ";
	cin>>no;
	for(int i=0; i<no; i++)
	{
		for(int j=0; j<5; j++)
		{
			for(int k=0; k<4; k++)
			{
				cout<<"Sales by salesman "<<k+1<<" of product "<<j+1<<" on day: "<<i+1<<endl;
				cin>>x;
				s[j][k]+=x;
				
			}
		}
	}
	int sp[4];
	int ps[5];
	for(int i=0;i<5; i++)
	{
		ps[i]=0;
		if(i<5)
			sp[i]=0;
	}
	 
	for(int i=0;i<5; i++)
	{
		for(int j=0; j<4; j++)
		{
			sp[j]+=s[i][j];
			ps[i]+=s[i][j];
		}
		
	}
	
	cout<<"The input taking has finished"<<endl;
	//setw(10);
	cout<<"      ";
	for(int i=0; i<4; i++)
	{
		cout<<setw(5)<<"SM"<<i+1<<" ";
	}
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<setw(5)<<"P"<<i+1<<" ";	
		for(int j=0; j<4; j++)
		{
			cout<<setw(5);
			cout<<s[i][j]<<" ";
		}
		cout<<setw(5)<<ps[i]<<endl;
		if(i==4)
		{
			cout<<"       ";
			for(int j=0; j<4; j++)
			{
				
				cout<<setw(5);
				cout<<sp[j]<<" ";
			}
			cout<<endl;
		}
		
	}
	return 0;
}
