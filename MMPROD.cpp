#include<iostream>
using namespace std;
#define mod 1000000007
#include<algorithm>
#define ll long long int
ll arr[100003];
ll a[100003],b[100003];

bool compare(ll a,ll b)
{
	if(abs(a)>=abs(b))return true;
	return false; 
}

bool comp1(ll a,ll b)
{
	if(abs(a)<=abs(b))return true;
	return false; 
}

ll maxprod(ll N,ll k)
{
	
	ll pos,neg,p,n;
	pos=p=n=neg=0;
	ll i;
	  ll prod=1;
	
	for(i=0;i<N;i++)
	{
		if(arr[i]<0)
		 {
		 	n++;
		 	b[n-1]=arr[i];
		 }
		else
		{
			a[p]=arr[i]; p++;
		 } 
		
	
	}
	if(p>0)
	sort(a,a+p,compare);
	if(n>0)
    sort(b,b+n,compare);
	 
	if(k==N)
	{
		pos=p;
		neg=n;
	}
	else if(k==1)
	{
		if(p==0)
		{
			prod=(mod+b[n-1])%mod;
			return prod;
		}
		else
		 return a[0];
	}
	
	else if(k<N&&p==0&&k%2==1)
	   {
	   	  pos=0;
	   	  neg=k;
	   	  sort(b,b+n,comp1);
	   }
	   else
	   {
	   	   while(k>0&&neg<n&&pos<p)
	   	   {
	   	   	  if(abs(a[pos])>abs(b[neg]))
	   	   	  {
	   	   	  	pos++;
					}
			   else
			     neg++;
			   k--;  
					   		
			  }
			 
		 if(k==0&&neg%2==1)
		 	{
		 		if(pos==p)
		 		{
		 			pos--; neg++;
				 }
				if(neg==n)
				{
					neg--; pos++;
				 } 
				 else 
				 {
				 	 if(a[pos]*a[pos-1]>=b[neg]*b[neg-1])
				 	 {
				 	 	 pos++; neg--;
					  }
					  else
					  {
					  	pos--; neg++;
					  }
				 }
				 
			   }
		  if(k>0)
		   {
		   	if(neg==n&&pos+k<p)
		   	{
		   		if(neg%2==1)
		   		{
		   			neg--; pos=pos+1+k;
				   }
				 else
				 pos+=k;  
			   }
			 if(pos==p&&neg+k<n)
			  {
			  	if((neg+k)%2==1)
			  	 {
			  	 	neg=neg+1+k;
			  	 	pos--;
				   }
				  else
				   neg+=k; 
				}  
	    	}	     
	   }
	 
	   
	   for(i=0;i<pos;i++)
	   prod=(prod*a[i])%mod;
	   
	   for(i=0;i<neg;i++)
	   prod=(prod*b[i])%mod;
	   
	   return prod;
	   
	
}


int main()
{
	ll t,N,k,i;
	ll prod=1;
	scanf("%lld", &t);
	
	while(t--)
	{
		scanf("%lld %lld", &N, &k);
		for(i=0;i<N;i++)
			scanf("%lld", &a[i]);
		prod=maxprod(N,k);
		if(prod<0)
		{
			prod=(prod+mod)%mod;
		}
		printf("%lld\n", prod);
	}
	
	return 0;
}
