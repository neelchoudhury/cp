//This is not correct.The logic is not correct


#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,m;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n,&m);
		if(m>=n*n)
			cout<<"POSSIBLE"<<endl;
		else
			cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}
