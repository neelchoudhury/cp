#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define sc(a) scanf("%lld", &a)
#define pr(a) printf("%lld\n", a)
#define pb push_back
#define ff first
#define ss second 
#define dbg(x)   cout<<#x<<"="<<x<<endl

using namespace std;

 
ll kee[1000010];
ll a[100010];

void f(ll n)
{
	ll v=n;

    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        //printf("%d ", 2);
    	kee[2]=1;
        //v.push_back(2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d g %d\n ", i,v/i);
            kee[i]=1;
            //v.push_back(i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
    	kee[n]=1;
   		//printf ("%d ", n);
    	//v.push_back(n);
        
}

int main()
{
	mem(kee); 
	ll t,n,k;
	sc(t);
	while(t--)
	{
		sc(n);sc(k);
		mem(a);
		mem(kee);
		for(ll i=0; i<n; i++)
			sc(a[i]);
		for(ll i=0; i<n; i++)
		{
			f(a[i]);
		}
		if(kee[k])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}