#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	ll n,m;
	ll i=1;
	cin>>n>>m;
	ll a[n+1];
	ll b[n+1];
	while(i<=n)
	{
		cin>>a[i];
		b[i]=a[i];
		i++;
	}
	while(m--)
	{
		char q;
		ll d;
		cin>>q>>d;
		switch(q)
		{
			case 'C':
			{
				for(ll i=1; i<=n;i++)
				{
					
					i>=n-d?b[i]=a[i-(n-d)]:b[i]=a[i-d];
				}
				break;
			} 
			case 'A':
			{
				for(ll i=1; i<=n; i++)
				{
					i<=d?b[i]=a[i+(n-d)]:b[i]=a[i-d];
				}
				break;
			}
			case 'R':
			{
				cout<<b[d]<<endl;
			}
		}
	}
}
