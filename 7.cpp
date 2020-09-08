#include<iostream>
using namespace std;

int main()
{
int i;
cout<<"To know the sum of digits of any 3 digit number, please enter that number -";
cin>>i;
int a,b,c,d;
a=i/100;
b=(i/10)-(10*a);
c=i-(100*a)-(10*b);
d=a+b+c;
cout<<"Sum of digits of given number is="<<d<<endl;
return 0;
}
