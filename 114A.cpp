#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	ll n,k;
	cin>>n>>k;
	int ans=0;
	while(k>1)
	{
		if(k%n!=0 and k!=1)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		k/=n;
		ans++;
	}
	cout<<"YES"<<endl<<ans-1<<endl;
	return 0;
}