 #include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long int

using namespace std;

void primeFactors(ll n)
{
    ll a[n];
    ll k=n;
	for(ll i=0;i<n; i++)
		a[i]=0; 
	ll i=0;
    while (n%2 == 0)
    {
        a[i]=2;
		i++; 
        n = n/2;
    }
 
     
    for (int j = 3; j<= n; j = j+2)
    {
         
        while (n%j == 0)
        {
            a[i]=j;
            i++;
            n = n/j;
        }
    }
 	cout<<a[i];
    cout<<endl;
     
}

 

int main()
{
	int t;
	ll n;
	cin>>t;
	while(t--)
	{
		scanf("%lld", &n);
		primeFactors(n);
		
		//printf("%lld\n",c);
	}
}
