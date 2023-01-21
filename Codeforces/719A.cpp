#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define pr(n) printf("%lld\n", n)

using namespace std;

ll a[100];

int main()
{
	ll n;
	sc(n);
	for(ll i=0; i<n; i++)
		sc(a[i]);
	if(n!=1)
	{
		if(a[n-1]!=0 and a[n-1]!=15)
		{
			if(a[n-2]>a[n-1])
				cout<<"DOWN"<<endl;
			else
				cout<<"UP"<<endl;
		}
		else
		{
			if(a[n-1]==0)
				cout<<"UP"<<endl;
			else
				cout<<"DOWN"<<endl;
		}
	}
	else
	{
		if(a[n-1]==15)
			cout<<"DOWN"<<endl;
		else if(a[n-1]==0)
			cout<<"UP"<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}