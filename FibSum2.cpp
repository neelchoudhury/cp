#include <stdio.h>
#define ll long long int
#define MOD 1000000007
 
void mul(ll F[2][2], ll M[2][2])
{
  ll x =  (F[0][0]*M[0][0] + F[0][1]*M[1][0])%MOD;
  ll y =  (F[0][0]*M[0][1] + F[0][1]*M[1][1])%MOD;
  ll z =  (F[1][0]*M[0][0] + F[1][1]*M[1][0])%MOD;
  ll w =  (F[1][0]*M[0][1] + F[1][1]*M[1][1])%MOD;
 
  F[0][0] = x%MOD;
  F[0][1] = y%MOD;
  F[1][0] = z%MOD;
  F[1][1] = w%MOD;
}

void powr(ll F[2][2], ll n)
{
  if( n == 0 || n == 1)
      return;
  ll M[2][2] = {{1,1},{1,0}};
 
  powr(F, n/2);
  mul(F, F);
 
  if (n%2 != 0)
     mul(F, M);
}

ll fib(ll n)
{
  ll F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  powr(F, n-1);
  return (F[0][0]%MOD)%MOD;
}
 
int main()
{
  int t;
  ll n,m;
  scanf("%d", &t);
  while(t--)
  {
  	scanf("%lld%lld",&n,&m);
  	ll sum=0;
  	for(ll i=n; i<=m; i++)
  		sum=(fib(i)+sum)%MOD;
  	printf("%lld\n", sum);
  }
  return 0;
}
