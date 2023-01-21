#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int cnt=0,ans=0;
	for(int i=1;i<=d; i++ )
	{
		if(i%k!=0 and i%l!=0 and i%m!=0 and i%n!=0 )
			cnt++;
	}
	ans=d-cnt;
	cout<<ans<<endl;
	return 0;
}
