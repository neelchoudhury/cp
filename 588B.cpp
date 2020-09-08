#include<bits/stdc++.h>
#define ll long long int
#define N 1000000

using namespace std;

bool prm[1000010];

ll p(ll n)
{
	ll ans=1;
	int f=0;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        if(f==0)
        {
        	ans*=2;
        	f=1;
        }
        n = n/2;
    }
    
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
    	f=0;
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);
            if(f==0)
            {
            	ans*=i;
            	f=1;
            }
            n = n/i;
        }
        
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
    	ans*=n;
        //printf ("%d ", n);
       
      return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	 
	//cout<<prm[2]<<endl;
	ll n;
	scanf("%I64d", &n);
//	cout<<n<<endl;
	//vector<ll> v;
	ll ans=1;
	ll m=n;
 
	// ll ans;
	 ans=p(n);
		 
	cout<<ans<<endl;
	
	return 0;
}
