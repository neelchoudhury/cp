#include<iostream>
using namespace std;

int main()
{
int a;
cout<<"select 1 to convert degree celsius into fahrenheit.\n";
cout<<"select 2 to convert fahrenheit into degree celsius.\n";
cin>>a;
if (a==1)
{
float c,f;
cout<<"Enter the value of temperature in celsius-";
cin>>c;
f=((1.8)*c)+32;
cout<<"temperature in fahrenheit is "<<f<<endl;
}
else
{
float c,f;
cout<<"Enter the value of temperature in fahrenheit-";
cin>>f;
c=(0.56667)*(f-32);
cout<<"temperature in degree celsius is "<<c<<endl;
}
return 0;
}
