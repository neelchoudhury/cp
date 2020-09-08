#include<iostream>
using namespace std;

int main()
{
int s;
cout<<"Enter the basic salary given to employee-";
cin>>s;
float a,b,c;
a=s*(0.4);
b=s*(0.2);
c=a+b+s;
cout<<"Gross income of employee is = "<<c<<endl;
return 0;
}
