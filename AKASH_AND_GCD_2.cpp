#include<bits/stdc++.h>
using namespace std;
 
#define  MOD   1000000007
#define  EPS   1e-6
#define  X     first
#define  Y     second
#define  N     600045
#define  sc    scanf
#define  pf    printf
#define  pb    push_back
#define  pff   push_front
#define  mp    make_pair
#define  ll    long long
#define  LN    20
#define  mp    make_pair
 
#define iosbase  ios_base::sync_with_stdio(false)
#define dbg(x)   cout<<#x<<"="<<x<<endl

#define MAXN 3000000
ll phi[MAXN + 1], prime[MAXN/10], sz,pr[MAXN+3];
bitset <MAXN + 1> mark;

ll bit[N],a[N],f[N];

void init()
{

	for (ll i = 2; i <= MAXN; i++ ){
	if(!mark[i]){
		phi[i] = i-1;
		prime[sz++]= i;
		pr[i]=i;
	}
	for (ll j=0; j<sz && prime[j]*i <= MAXN; j++ ){
		mark[prime[j]*i]=1;
		pr[prime[j]*i]=i;
		if(i%prime[j]==0){
			phi[i*prime[j]] = phi[i]*prime[j];
			break;
		}
		else phi[i*prime[j]] = phi[i]*(prime[j]-1 );
	}
	}
	phi[1]=1;
} 






void cal()
{
	ll i,j;
	 
	for(i=1;i<N;i++)
	{
		for(j=i;j<N;j+=i)
		{
			f[j]+=phi[i]*i;
			f[j]%=MOD;
		}
	}
	 
	for(i=1;i<N;i++)
	{
		f[i]=(1+f[i])/2;
	}
}
void update(ll x,ll val)
{
	while(x<N)
	{
		bit[x]+=val;
		bit[x]=(bit[x]+MOD)%MOD;

		x+=(x&-x);
	}
}
ll query(ll x)
{
	ll res=0;
	while(x)
	{
		res+=bit[x];
		x-=(x&-x);
		res%=MOD;
	}
	return res%MOD;
}
 

int main()
{
	ll n,i,q,x,y,ans;
	char type;
	init();
	cal();

	 
	scanf("%lld", &n);
	for(i=1;i<=n;i++)
	{
		//cin>>a[i];
		scanf("%lld", &a[i]);
		update(i,f[a[i]]);
	}
	//cin>>q;
	scanf("%lld", &q);
	while(q--)
	{
		cin>>type;
		//scanf("%c", &type);
		//cin>>x>>y;
		scanf("%lld %lld", &x, &y);
		 
		if(type=='C')
		{
			ans=query(y)-query(x-1);
			ans=(ans+MOD)%MOD;
			//cout<<ans<<endl;
			printf("%lld\n", ans);
		}
		else
		{
			update(x,-f[a[x]]);
			a[x]=y;
			update(x,f[a[x]]);
		}

		 
	}

	return 0;
}	
