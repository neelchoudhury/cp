#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	scanf("%lld", &n);
	ll a[n];
	ll b[n],c[n];
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
		
		
	/*for(int i=0;i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;*/
	
	
	
	b[0]=a[0];
	for(ll i=1; i<n; i++)
		b[i]=a[i]+b[i-1];
/*	for(int i=0;i<n; i++)
		cout<<b[i]<<" ";
	cout<<endl;*/
	c[n-1]=a[n-1];
	for(ll i=n-2;i>=0; i--)
		c[i]=a[i]+c[i+1];
/*	for(int i=0;i<n; i++)
		cout<<c[i]<<" ";*/
//	cout<<endl;
	ll cnt=0;
	int flag=0;
	for(ll i=0;i<n-1;i++ )
	{
		
		for(ll j=n-1;j>i;j--)
		{
		//	cout<<"Entered for loop i,j "<<i<<j<<endl;
			if(b[i]==c[j] and (b[i]==(b[j-1]-b[i]) or c[j]==(c[i+1]-c[j])))
			{
				cnt++;
			
			//cout<<i<<" "<<j<<" "<<cnt<<endl;
			}
		}
		
		
	}
	printf("%lld", cnt);
	return 0;
}
