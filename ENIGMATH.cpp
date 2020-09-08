#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> primeFactors(int n)
{
    // Print the number of 2s that divide n
    vector<ll> v;
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        v.push_back(2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);
            v.push_back(i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
    	v.push_back(n);
    	
   		//printf ("%d ", n);
   	return v;
        
}

vector<ll> va, vb;

int main()
{
	ll t,a,b;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &a, &b);
		va=primeFactors(a);
		vb=primeFactors(b);
		sort(va.begin(), va.end());
		sort(vb.begin(),vb.end());
		ll ans=1;
		int i=0,j=0;
		for(; i<va.size() and j<vb.size();)
		{
			if(va[i]==vb[j])
			{
				ans*=va[i];
				i++;
				j++;
			}
			else if(va[i]>vb[j])
			{
				while(vb[j]<va[i])
					j++;
			}
			else
			{
				while(va[i]<vb[j])
					i++;
			}
		}
		printf("%lld %lld\n", b/ans,a/ans);
	}
	return 0;
}
