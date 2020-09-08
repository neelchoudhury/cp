#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cout<<"L=";
cin>>a;
cout<<"B=";
cin>>b;
cout<<"H=";
cin>>c;
if ((c*c)==(b*b)+(a*a))
{
cout<<"Its a right angled triangle.\n";
float e,f;
e=(0.5)*a*b;
f=a+b+c;
cout<<"Area of triangle is="<<e<<endl;
cout<<"Circumference of triangle is="<<f<<endl;
}
else
cout<<"It is not a right angled triangle.";
return 0;
}
