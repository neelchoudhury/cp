#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false);

using namespace std;

vector<ll> v;

void p(ll n)
{
	//ll v=n; 
	v.clear();
	ll cnt=0;
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        //v.push_back(2);
        n = n/2;
        cnt++;
    }
    v.push_back(cnt);
  
    for (int i = 3; i <= sqrt(n); i = i+2)
    { 
    	cnt=0;
        while (n%i == 0)
        {
            //printf("%d g %d\n ", i,v/i);
            //v.push_back(i);
            cnt++;
            n = n/i;
        }
        v.push_back(cnt);
    }
  
    if (n > 2) 
    	v.push_back(1);
        
}

int main()
{
	ll t,n;
	scanf("%lld", &t);
	for(ll i=1; i<=t; i++)
	{
		scanf("%lld", &n);
		printf("Case %d: ",i);
		v.clear(); 
		p(n);
		
		ll ans=1;
		for(ll j=0; j<v.size(); j++)
		{
			 //cout<<v[j]<<" jj ";
				ans*=(v[j]+1);
		 
		}
		//cout<<v.size()<<endl;
		if(ans%2)
			printf("Yes\n");
		else
			printf("No\n");
	}
	
	return 0;
}
