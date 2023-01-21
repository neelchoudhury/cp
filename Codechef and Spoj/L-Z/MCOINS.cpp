#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1000010],val=-1,b[5];

int main()
{
	ll k,l,m,n;
	scanf("%lld %lld %lld", &k, &l, &m);
	for(ll i=0; i<=1000000; i++)
			a[i]=0;
  	for(ll i=1;i<=1000000; i++)
  	{
  		a[i]=!a[i-1];
  		/*if(i==1)
  			cout<<"b "<<a[i]<<" b";*/
		if(i>=k and a[i-k]==0)a[i]=1;
		if(i>=l and a[i-l]==0)a[i]=1;	
	}
	/*for(int i=0; i<=20; i++)
		cout<<a[i]<<" ";
	cout<<endl;*/
	while(m--)
	{
		scanf("%lld", &n);
		
		//ans=a[n];
		if(a[n])
			cout<<"A";
		else
			cout<<"B";
	}
	cout<<endl;
	return 0;
}
