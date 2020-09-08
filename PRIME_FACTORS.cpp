// Program to print all prime factors
#include<iostream>
# include <stdio.h>
# include <math.h>

//vector<int> v;
using namespace std;
 
// A function to print all prime factors of a given number n
void primeFactors(int n)
{
	int v=n;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        printf("%d ", 2);
        //v.push_back(2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            printf("%d g %d\n ", i,v/i);
            //v.push_back(i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
   		printf ("%d ", n);
    	//v.push_back(n);
        
}
 
/* Driver program to test above function */
int main()
{
    int n = 315;
    primeFactors(42);
    /*for(int i=1; i<=; i++)
    {
    	cout<<i<<":  ";
    	primeFactors(i) ;
    	cout<<endl;
    }*/
    return 0;
}
