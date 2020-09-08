#include<bits/stdc++.h>
#define ll long long int
#define MOD 99991

using namespace std;

ll nck(ll n, ll k)
{
	ll result = 1    ;
	ll x=min(k,n-k);
	for (ll i=1; i<= x; i++)
	{
   		result *= (n-i+1);
   		result /= i;
	}
	return result;
}

ll add1(ll a[], ll n,  ll size)
{
	for(ll i=n-1; i>=0; i++)
	{
		if(a[i]==0)
		{
			a[i]=1;
			size+=1;
			break;
		}
		else
		{
			a[i]=0;
			size--;
			i--;
			if(a[i]==0)
				a[i]=1, size++;
			else
			{
				while(a[i]==1 and i>=0)
				{
					a[i]=0;
					i--;
					size--;
				}
				if(i>=0)
				
				{
					a[i]=1;
					size++;
				}
			}
			break;	
		}
	}
	return size;
}

void multiply(ll F[2][2], ll M[2][2]);
 
void power(ll F[2][2], ll n);
 
/* function that returns nth Fibonacci number */
ll fib(ll n)
{
  ll F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
 
/* Optimized version of power() in method 4 */
void power(ll F[2][2], ll n)
{
  if( n == 0 || n == 1)
      return;
  ll M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
 
  if (n%2 != 0)
     multiply(F, M);
}
 
void multiply(ll F[2][2], ll M[2][2])
{
  ll x = (((F[0][0]%MOD)*(M[0][0]%MOD))%MOD +((F[0][0]%MOD)*(M[0][0]%MOD))%MOD)%MOD;
  ll y =  (((F[0][0]%MOD)*(M[0][1]%MOD))%MOD +((F[0][1]%MOD)*(M[1][1]%MOD))%MOD)%MOD;
  ll z = (((F[1][0]%MOD)*(M[0][0]%MOD))%MOD +((F[1][1]%MOD)*(M[1][0]%MOD))%MOD)%MOD;
  ll w =  (((F[1][0]%MOD)*(M[0][1]%MOD))%MOD +((F[1][1]%MOD)*(M[1][1]%MOD))%MOD)%MOD;
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
 

int main()
{
	ll n,k; 
	scanf("%lld %lld", &n,&k); 
	ll a[n]; 
	memset(a,0,sizeof(a));
	ll b[n]; 
	memset(b,0,sizeof(b));
	for(ll i=0;i<n; i++)
		scanf("%lld", &a[i]);
	
	for(ll i=n-1;i>=(n-k); i--)
		b[i]=1;
	ll s=0;
	ll s1=0;
	/*for(ll i=0;i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;*/
	ll x=nck(n,k);
	ll size=k;
	for(ll i=1; i<=x; )
	{
		//cout<<"runnign"<<endl;
		s1=0;
		size=add1(b,n,size);
		//cout<<size<<endl;
		if(size==k)
		{
			i++;
			for(int j=0; j<n; j++)
			{
				if(b[j])
					s1=(s1+a[j])%MOD;
			}
			s=(s+fib(s1))%MOD;
		}
	}
	printf("%lld\n", s);
	return 0;
}
