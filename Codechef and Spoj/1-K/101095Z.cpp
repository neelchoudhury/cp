#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define BIG 100000000

using namespace std; 

int main()
{
	ios;
	ll d,k,n;
	cin>>d>>k>>n;
	ll qq=n%d;
	k--;
	if(k%2==0)
	{
		k=(k+qq)%d;
		ll x=k+1;
		ll y=k-1;
		x=(k+1+qq+BIG*d)%d;
		y=(k-1+qq+BIG*d)%d;
		cout<<x+1<<" "<<y+1<<endl;
	}
	else
	{
		k=(k-qq+BIG*d)%d;
		ll x=k+1;
		ll y=k-1;
		x=(k+1-qq+BIG*d)%d;
		y=(k-1-qq+BIG*d)%d;
		cout<<x+1<<" "<<y+1<<endl;
	}
	
	
	 
	return 0;
}