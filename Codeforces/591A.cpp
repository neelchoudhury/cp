#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
 
using namespace std;

int main()
{
	ios;
	ll l,p,q;
	cin>>l;
	cin>>p;
	cin>>q;
	long double ans;
	ans=(l/(long double)(p+q))*p;
	cout<<setprecision(9)<<ans<<endl;
	return 0;
}
