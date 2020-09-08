#include<bits/stdc++.h>
#define ll long long int
#define N 600000
#define M 400000
 
using namespace std;
 
bool trie[N];
ll ans1[M], ans2[M];
ll a[M],b[M];
ll k=0;
ll powr[35];
 
void insert_trie(ll x)
{
	ll i=1;
	bool bit;
	for(int j=15; j>=0; j--)
	{
		bit=((x&(1<<j))>>j);
		//cout<<"bit "<<bit<<" i "<<i<<" j "<<j<<endl;
		if(bit==0)
		{
			trie[2*i]=1;
			i=2*i;
		}
		else if(bit==1)
		{
			trie[2*i+1]=1;
			i=2*i+1;
		}
	}
}
 
 
        
ll query_trie(ll x)
{
	ll i=1,max=0;
	bool bit;
	for(int j=15; j>=0; j--)
	{
		bit=((x&(1<<j))>>j);
		if(bit==1)
		{
			if(trie[2*i]==0)
			{
				max=max+(powr[j]*bit);
				i=2*i+1;
			}
			else if(trie[2*i]==1)
			{
				max=max+(powr[j]*0);
				i=2*i;
			}
			
		}
		else if(bit==0)
		{
			if(trie[2*i+1]==0)
			{
				max=max+(powr[j]*bit);
				i=2*i;
			}
			else if(trie[2*i+1]==1)
			{
				max=max+(powr[j]*1);
				i=2*i+1;
			}
		}
		
	}
	return max;
}
 
int main()
{
	ll n;
	powr[0]=1;
	for(int i=1; i<=34; i++)
		powr[i]=powr[i-1]*2;
	scanf("%lld", &n);
	memset(ans1,0,sizeof(ans1));
	memset(ans2,0,sizeof(ans2));
	memset(b,0,sizeof(b));
	memset(a,0,sizeof(a));
	memset(trie,0,sizeof(trie));
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
	b[0]=a[0];
	for(ll i=1; i<n; i++)
	{ 
		b[i]=a[i]^b[i-1];
	}
	ll ans=0;
	k=0; 
	insert_trie(0);
	ll xorpre=0;
	for(ll i=0; i<n; i++)
	{
		xorpre=xorpre^a[i];
		insert_trie(xorpre);
		ll z=query_trie(xorpre);
		//cout<<z<<" query_max "<<b[i]<<" bi "<<endl;
		ans=max(ans,z^xorpre);
		ans1[i]=ans;
	}
	 
	//second subarray calculations
	
	memset(b,0,sizeof(b));
	memset(trie,0,sizeof(trie));
	
	b[n-1]=a[n-1];
	for(ll i=n-2; i>=0; i--)
	{
		b[i]=a[i]^b[i+1];
	}
	k=0;
	ans=0; 
	insert_trie(0);
	xorpre=0;
	for(ll i=n-1; i>=0; i--)
	{
		xorpre=xorpre^a[i];
		insert_trie(xorpre);
		ll z=query_trie(xorpre);
		//cout<<z<<" query_max"<<endl;
		ans=max(ans,z^xorpre);
		ans2[i]=ans;
		
	}
	
	
 
	//Summing things up
	
	ans=0;
	for(ll i=0; i<n-1; i++)
	{
		ans=max(ans,ans1[i]+ans2[i+1]);
	}
	ans=max(ans,ans1[n-1]);
	ans=max(ans,ans2[0]);
	printf("%lld\n", ans);
	return 0;
}   
