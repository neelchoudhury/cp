#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll pr[100010];

ll primeFactors(ll n)
{
	ll sum=1;
	ll v=n;
	if(n%2)
		sum+=n;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
       // printf("%d ", 2);
        //v.push_back(2);
        
        n = n/2;
        if(n%2)
        	sum+=n;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        int f=0;
        while (n%i == 0)
        {
            //printf("hhhhhhh   %d ", i);
            if(f==0)
            {
            	if(i%2)
            	sum+=i;
            //cout<<"   vj1    "<<sum<<endl;	
            if((v/i)%2 and (v/i)!=i )
            	sum+=(v/i);
			}
			f=1;
            //v.push_back(i);
            n = n/i;
            //cout<<"   vj2    "<<sum<<endl;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2 and n!=v)
    {
    	//cout<<"  bing "<<n<<endl;
    	sum+=n;
	}	
    	
   	//	printf ("%d ", n);
    	//v.push_back(n);
    return sum;    
}

int main()
{
	ll t,l,r;
	memset(pr,0,sizeof(pr));
	pr[0]=0;
	pr[1]=1;
	pr[2]=2;
	for(ll i=3; i<=100000; i++)
		pr[i]=primeFactors(i)+pr[i-1];
	
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &l, &r);
		ll ans=pr[r]-pr[l-1];
		printf("%lld\n", ans);
	}
	return 0;
}
