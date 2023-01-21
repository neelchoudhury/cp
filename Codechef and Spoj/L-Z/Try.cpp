#include<iostream>
using namespace std;
int main()
{
    float balance=50.0;
    int count1=0;
    do
    {
        balance+=.02*balance;
        count1++;
    }while(balance<100.0);

    cout<<count1<<endl<<balance;
    return 0;
}
