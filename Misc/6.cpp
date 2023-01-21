#include<iostream>
using namespace std;

int main()
{
int p,r;
cout<<"Enter the value of pricipal amount=";
cin>>p;
cout<<"Enter the value of rate of interest=";
cin>>r;
float i,t;
cout<<"Enter the time duration=";
cin>>t;
i=t*(p/100)*r;
cout<<"Interest="<<i<<endl;
return 0;
}
