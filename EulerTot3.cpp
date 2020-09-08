#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long int

using namespace std;

ll f(ll n) 
{ 
       ll res = n; 
       for(ll i=2;i <= sqrt(n);i++) 
       { 
         	if (n % i == 0) 
         		res -= res / i; 
         	while (n % i == 0) 
         		n /= i; 
       } 
       if (n > 1) 
       		res -= res / n; 
       return res; 
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		ll et;
		et=f(n);
		printf("%lld\n",et);
	}
	return 0;
}
