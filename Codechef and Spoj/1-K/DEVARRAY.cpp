#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll n,q,x;
	scanf("%lld %lld", &n, &q);
	for(ll i=0; i<n; i++)
		scanf("%lld", &a[i]);
	sort(a,a+n);
	ll aa=a[0] ,bb=a[n-1];
	while(q--)
	{
		scanf("%lld", &x);
		if(x>=aa and x<=bb)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
