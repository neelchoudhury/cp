#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

inline ll power(ll a, ll b)
{
	ll ans=1;
	while(b>0)
	{
		if(b&1)
		{
			ans=(ans*a)%MOD;
		}
		a=(a*a)%MOD;
		b=b>>1;
	}
	return ans;
}

inline ll int_mod(ll a, ll b)
{
  return (a % b + b) % b;
}

ll a[100005];
char s[100005];

int main()
{
	
	memset(a,0,sizeof(a));
	a[0]=1;
	for(ll i=1; i<=100005; i++)
	{
		a[i]=((a[i-1]%MOD)*(31))%MOD;
	}
	ll p=power(31,MOD-2);
	while(scanf("%s", s)==1)
	{ 
		ll hash1=0,hash2=0;
		ll l=strlen(s);
	/*	for(ll i=0; i<l; i++)
		{
			hash1=int_mod(hash1 * 31 + s[i], MOD);
		} 
		for(ll i=l-1; i>=0; i--)
		{
			hash2=int_mod(hash2 * 31 + s[i], MOD);
		} */
		for(ll i=0; i<l; i++)
		{
			hash1=((hash1%MOD*31%MOD)%MOD +s[i]%MOD)%MOD;
		} 
		for(ll i=l-1; i>=0; i--)
		{
			hash2=((hash2%MOD*31%MOD)%MOD +s[i]%MOD)%MOD;
		} 
		if(hash1==hash2)
		{
			printf("%s\n", s);
		}
		else
		{
			ll x=l-1;
			ll j=0;
			//cout<<"  "<<hash1<<" "<<hash2<<endl;
			while( hash1!=hash2 )
			{ 
			if(x<0)
			{
				break;
			}
				hash1=(hash1 - ((s[j]%MOD)*(a[x]%MOD))%MOD + 2*MOD )%MOD;
				hash2=(hash2-(s[j]%MOD) +2*MOD)%MOD;
				hash2=(hash2%MOD * p%MOD)%MOD;
				//cout<<hash1<<" "<<hash2<<" "<<p<<endl;
				j++;
				x--;
			} 
			printf("%s", s);
			for(int qq=j-1; qq>=0; qq--)
				printf("%c",s[qq]);
			printf("\n");
		}
	}
	return 0;
}
