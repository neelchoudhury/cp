#include<iostream>
#define ll long long int

using namespace std;
ll nums(ll n, int x)
{
	ll cnt=0;
	for(ll i=n;i>0;i/=x )
	{
		if(i%x==0)
		{
			cnt+=1;
			//i/=x;
		}
		else
		{
			return cnt;
		}
	}
	//cout<<"Nums    "<<cnt<<endl;
	return cnt;
}

ll num2(ll n)
{
	ll cnt=0;
	for(ll i=1; i<=n; i++)
	{
		if(i%2==0)
			cnt+=nums(i,2);
	}
//	cout<<"Num2   "<<cnt<<endl;
	return cnt;
} 
ll num5(ll n)
{
	ll cnt=0;
	for(ll i=1; i<=n; i++)
	{
		if(i%5==0)
			cnt+=nums(i,5);
	}
	//cout<<"Num5    "<<cnt<<endl;
	return cnt;
} 

int main()
{
	ll t;
	cin>>t;
	ll a[t];
	while(t--)
	{
		cin>>a[t];
		//ll c=num2(a[t]);
		ll b=num5(a[t]);
		cout<<b;
		cout<<endl;
	}
	return 0;
}
