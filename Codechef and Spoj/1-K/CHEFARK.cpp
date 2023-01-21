#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll a[100010],b[110][110];
ll fact[100010],ifact[100010],pow2[100010],sumpow2[100010];

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}

ll ncr(ll n,ll r)
{
	ll ans=1;
	if(n<r)
		return 0;
	if(n==r )
		return 1;
	if(r==0)
		return 1;
	ans=((fact[n]%MOD*ifact[n-r]%MOD)%MOD*ifact[r]%MOD)%MOD;
	return ans;
}

int main()
{
	ll t,n,k;
	scanf("%lld", &t);
	memset(b,0,sizeof(b));
/*	for(ll i=1; i<=100; i++)
		b[(ll)1][i]=1,b[(ll)2][i]=1,b[i][1]=1;
	for(ll i=3; i<=100; i++)
	{
		for(ll j=2; j<=100; j++)
		{
			b[i][j]=(b[i-1][j-1]%MOD+b[i-1][j]%MOD)%MOD;
		}
	}
	for(int i=1; i<=10; i++)
	{
		for(int j=1; j<=10; j++)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}*/
	memset(fact,0,sizeof(fact));
	memset(ifact, 0, sizeof(ifact));
	memset(pow2,0,sizeof(pow2));
	memset(sumpow2,0,sizeof(sumpow2));
	fact[0]=1,fact[1]=1;
	for(ll i=2; i<=100000; i++)
	{
		fact[i]=(i%MOD*fact[i-1]%MOD)%MOD;
	}
	for(ll i=1;i<=100000; i++)
	{
		ifact[i]=power(fact[i],MOD-2,MOD);
	}
	pow2[0]=1;
	for(ll i=1; i<=100000; i++)
	{
		pow2[i]=(pow2[i-1]%MOD*2%MOD)%MOD;
	}
	sumpow2[0]=1;
	for(ll i=1; i<=100000; i++)
	{
		sumpow2[i]=sumpow2[i-1]+pow2[i];
	}
	/*for(int i=1; i<=10; i++ )
	{
		for(int j=0; j<=i; j++ )
			cout<<ncr(i,j)<<" ";
		cout<<endl;
	}*/
	while(t--)
	{
		scanf("%lld %lld", &n, &k);
		memset(a,0,sizeof(a));
		ll cnt=0;
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
			if(a[i]==0)
				cnt++;	
		}
		if(cnt>1)	
			n=n-cnt+1;
		ll x=n,ans=0;
		if(n==1 or n==0)
			ans=1;
		else if(n==2)
			ans=2;
		else if(k==1)
			ans=n;
		else
		{
			if(k>=n-1)
				ans=pow2[n-1];
			else
			{
				ans=n;
				x-=2;
				//k-=1;
				ll i;
				for( i=1; i<=min(n-2,k-1);i++)
				{
					 ans=(ans%MOD + ((x%MOD)*pow2[i-1]%MOD)%MOD )%MOD;
					 x--;
				}
			//	cout<<ans<<endl;
				i--;
				ll kk=0;
				for(ll j=i+1; j<=n-2; j++)
				{
					if(j==min(n-2,k-1)+1)
					{
						//cout<<"end"<<endl;
						kk=(((2%MOD*pow2[i-1]%MOD)%MOD)%MOD - ncr(i-1,k-2)%MOD +MOD)%MOD;
						//cout<<kk<<endl;
					}
					else
					{
						//cout<<i<<" "<<k-1<<endl;
						kk=(((2%MOD*kk%MOD)%MOD)%MOD - ncr(i-1,k-2)%MOD +MOD)%MOD;
						//cout<<kk<<endl;
					}
					ans=(ans%MOD + (x%MOD*(kk)%MOD )%MOD)%MOD;
					//cout<<ncr(i,k-1)<<" "<<i<<" "<<k-1<<" "<<kk<<endl;
					i++;
					x--;
				}
				//cout<<ans<<endl;
			}
			//printf("%lld\n", ans);
			
		}
		printf("%lld\n", ans);		
	}
	return 0;
}
