#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll p[55];
ll t[55];

int main()
{
	ll n,c;
	cin>>n>>c;
	memset(p,0,sizeof(p));
	memset(t,0,sizeof(t));
	for(ll i=0; i<n; i++)
		cin>>p[i];
	for(ll i=0; i<n; i++)
		cin>>t[i];
	ll ans1=0, ans2=0;
	ll t1=0,t2=0;
	for(ll i=0;i<n; i++)
	{
		t1+=t[i];
		t2+=t[n-1-i];
		ans1+=(max((ll)0,p[i]-c*t1));
		ans2+=(max((ll)0,p[n-i-1]-c*t2));
	}
	if(ans1>ans2)
		cout<<"Limak";
	else if(ans1<ans2)
		cout<<"Radewoosh"<<endl;
	else
		cout<<"Tie"<<endl;
	return 0;
}
