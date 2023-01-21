#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

ll max(ll a[], ll n)
{
	ll x=a[0];
	for(int i=1; i<n; i++)
	{
		if(a[i]>x)
			x=a[i];	
	} 
	return x;	
} 

ll max1(ll a[], ll n)
{
	ll x=a[0];
	for(ll i=1; i<n; i++)
	{
		if(a[i]>x)
			x=a[i];	
	} 
	for(ll i=0; i<n; i++)
	{
		if(a[i]==x)
		{
			a[i]=0;
			return i;
		}
	}
}

void max2(ll a[], ll i)
{
	a[i]=0;
	return ;
} 


int main()
{
	ll n, x,y;
	scanf("%lld%lld%lld", &n,&x,&y);
	ll a[n];
	ll b[n];
	ll sum=0;
	ll c=0;
	ll d=0;
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
	for(ll i=0; i<n; i++)
		scanf("%lld", &b[i]);
 	for(ll i=0; i<n; i++)
 	{
 		ll p=max(a,n);
 		ll q=max(b,n);
 		ll m;
		 if(x>c and y>d and (c+d)<=n)
 		{
 			if(p>q)
 			{
 				m=max1(a,n);
 				max2(b,m);
				 sum+=p;
				c+=1;
				//cout<<i<<" c "<<c<<" "<<sum<<endl;
				
 			}
 			else if(p<q)
 			{
 				m=max1(b,n);
 				max2(a,m);
				 sum+=q;
				d+=1;
				//cout<<i<<" d "<<d<<" "<<sum<<endl;
				
 			}
 			else if(p==q)
 			{
 				if(c>=d)
 				{
 					sum+=q;
 					max1(b,n);
 					d+=1;
 					//cout<<i<<" deq "<<d<<" "<<sum<<endl;
 				}
 				else
 				{
 					sum+=p;
 					max1(a,n);
 					c+=1;
 					//cout<<i<<" ceq "<<c<<" "<<sum<<endl;
 				}
 			}
 		}
 		else if(c==x and (c+d)<=n)
 		{
 			sum+=q;
 			max1(b,n);
 			d+=1;
 			//cout<<i<<" dc0 "<<d<<" "<<sum<<endl;
 		}
 		else if(d==y and (c+d)<=n)
 		{
 			sum+=p;
 			max1(a,n);
 			c+=1;
 			//cout<<i<<" cd0 "<<c<<" "<<sum<<endl;
 		}
 	}
 	printf("%lld", sum);
 	return 0;
		
}
