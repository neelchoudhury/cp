#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int n,number,sum;
cout<<"Enter value of no. of digits in no.";
cin>>n;
cout<<"enter the no.";
cin>>number;
sum=0;
for(int i=1;i<n;++i)
    {
    int a;
    for(int j=1;j<i;++j)
        {
        number=number/10;
        }
    a=number%10;
    sum=sum+a*(pow(10,(i-1)));
    }
cout<<sum<<endl;
return 0;
}
