#include<bits/stdc++.h>
#define ll unsigned long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define f first
#define s second
#define sc(a) scanf("%lld",&a)
//#define pr(a) printf("%lld\n",a)
#define MOD 1000000007
 
using namespace std; 
 
ll pr[34040];
vector<ll> v; 
vector<ll> vec[34040];
 
//vector<ll> pv;
ll bits[10000040];
 
ll primes[10000040]	;
 
 
void pre()
{
	//bits[2]=1;
	for(ll i=0; i<10000005;i++)
		bits[i]=0;
    for(ll i = 2; i <10000040; i += 2)
		primes[i] = 2 ;
	//ll sq=(ll)sqrt(10000000-1);
    for(ll i = 3; i < 10000040; i += 2)
            if (!bits[i])
			{
                primes[i] = i   ;
                 for(ll j = i ; (j*i )< 10000040; j += 2 )
                    if (!bits[j*i])
					{
                        primes[j*i] = i ;
                        bits[j*i] = 1 ;
 
                    }
            }
}
 
int main()
{
	ll t,n; 
	mem(bits);
	mem(primes);
	pre(); 
	for(ll i=0;i<=34000; i++)
		pr[i]=1; 
	scanf("%lld", &t);
 	pr[1]=0;
	pr[0]=0;
	for(ll i=2; i<=34000; i++)
	{
		if(pr[i]==1)
		{
			/*if(i>3100 and i<3200)
				cout<<i<<endl;*/
		for(ll j=i*i;j<=34000; j+=i)
		{
			pr[j]=0;
			//cout<<i<<" "<<j<<endl;
		}
		}
	}
 	ll qq=1;
 	for(ll i=2; i<=34040; i++)
 	{
 		if(pr[i]==1)
 		{
 			 qq=1;
 			while(qq<=1000000000099000000)
 			{
 				vec[i].push_back(qq);
 				qq*=i;
 			}
 		}
 	}
 	
 	//cout<<"cnt"<<endl;
	while(t--)
	{
		v.clear();
		scanf("%lld", &n);
		ll ans=1;
	 	//ll i=0;
	 	ll cnt=0;
	 	//cout<<n<<":  ";
		while(n>1) {
			v.push_back(primes[n]);
			n/=primes[n];
		}
		sort(v.begin(),v.end()); 
		/*for( int i=0;i<v.size(); i++)
			cout<<v[i]<<" ";
		cout<<endl;*/
	 	cnt=1;
	 	ll tmp;
	 	for(ll i=1; i<v.size(); i++)
	 	{
	 		if(v[i]==v[i-1])
	 		{
	 			cnt++;
	 		}
	 		if(v[i]!=v[i-1]  )
	 		{
	 			if(cnt==1)
	 			{
	 				tmp=v[i-1]*(v[i-1]-1)+1;
	 			}
	 			else if(cnt>1)
	 			{
	 				tmp=(vec[v[i-1]][2*cnt+1]+1)/(v[i-1]+1);
	 			}
	 			ans*=tmp;
	 			cnt=1;
	 		}
	 		if( i==(v.size()-1))
	 		{
	 			if(cnt==1)
	 			{
	 				tmp=v[i]*(v[i]-1)+1;
	 			}
	 			else if(cnt>1)
	 			{
	 				tmp=(vec[v[i]][2*cnt+1]+1)/(v[i]+1);
	 			}
	 			ans*=tmp;
	 			cnt=0;
	 		}
	 	}
	 	if(v.size()==1)
	 	{
	 		tmp=v[0]*(v[0]-1)+1;
	 		ans=tmp;
	 	}
	 	printf("%lld\n", ans);
	}
	return 0;
}  
