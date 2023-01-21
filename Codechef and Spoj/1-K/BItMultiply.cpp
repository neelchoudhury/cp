#include<iostream>

using namespace std;

int add(int x,int y){
    int a,b;
    do{
        a=x&y;
        b=x^y;
        x=a<<1;
        y=b;
    }while(a);
    return b;
}

int neg(int x)
{
	return add(~x,1);
}
int sub(int x,int y)
{
	y=neg(y);
	
	return add(x,y);
}

int main()
{
	int x,y;
	int z=0;
	cin>>x>>y;
	while(x--)
	{
		z=add(z,y);
	}
	cout<<z<<endl;
	
	cin>>x>>y;
	z=0;
	while(x>=y)
	{
		z=sub(x,y);
	}
	cout<<z<<endl;
}


