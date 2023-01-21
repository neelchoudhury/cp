#include<iostream>
using namespace std;

int main()
{
	
	char a[5][4],ch;int i,j;
	for(i=0;i<5;++i)
	{
		for(j=0;j<3;++j)
		a[i][j]='_';
	}
	for(i=0;i<5;++i)
	a[i][3]='X';
	do
	{
	
		cout<<"  A B C D "<<endl;
		for(i=0;i<5;++i)
		{
			cout<<i+1<<" ";
			for(j=0;j<4;++j)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		int m,n;
		cout<<"To book seat, enter row number-";
		cin>>m;
		cout<<"Enter column number-";
		cin>>n;
		if(n==4)
		cout<<"Sorry, this seat is reserved for VIP's, try another seat."<<endl;
		else
		{
			if(a[m-1][n-1]=='X')
			cout<<"Seat is already booked try another seat."<<endl;
			else
			{
				a[m-1][n-1]='X';
				cout<<"Your seat is booked, thank you!"<<endl;
			}
		}
		cout<<"Enter y or Y to continue.";
		cin>>ch;
	}while((ch=='y') || (ch=='Y'));
	return 0;
}
