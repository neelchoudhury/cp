#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ll t,c, x, p=-1,n=0,cnt=0, ans=0;
	cin>>t>>c;
	for(ll i=0; i<t; i++)
	{
		cin>>n;
		if(p!=-1)
		{
			if(n-p>c)
			{
				cnt=1;
			}
			else
			{
				cnt++;
			}
		}
		if(p==-1)
		{
			cnt++;
		}
		p=n;
		
	}
	cout<<cnt<<endl;
	return 0;
}
