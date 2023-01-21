#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll powr[35];

int main()
{
	powr[0]=1;
	for(int i=1; i<=34; i++)
		powr[i]=powr[i-1]*2;
	ll x;
	cin>>x;	
	ll ans=0;
	while(x>0)
	{
		int i=0;
		for( i=0;i<=34 ; i++)
		{
			if(powr[i]>x)
				break;
		}
		x-=powr[i-1];
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
