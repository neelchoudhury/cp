#include<bits/stdc++.h>
#define ll long long int

using namespace std;

char a[100010];

int main()
{
	ll n;
	cin>>n;
	cin>>a;
	sort(a,a+n);
	ll cnt1=1,cnt2=0;
	for(ll i=1; i<n; i++)
	{
		if(a[i]!=a[i-1])
			cnt1++;
		else
			cnt2++;
	}
	ll ans=26-cnt1;
	if(ans<cnt2)
		cout<<-1<<endl;
	else
		cout<<cnt2<<endl;
	return 0;
}
