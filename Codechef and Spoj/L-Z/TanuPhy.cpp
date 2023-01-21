#include<iostream>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	ll n,f;
	while(t--)
	{
		cin>>n>>f;
		ll a[n];
		ll s=0;
		ll m=0;
		for(ll i=0; i<n;++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(ll i=1, j=0;i<n,j<n-1;i++)
		{
			 
			if(a[i]%f==0&&(a[i]/f==a[j]||a[i]==a[j]))
			{
				s+=1;
			}
				if(i==n-j-1)
			{
				i=j+2;
				j++;
			}
			
		}
		cout<<s<<endl;
		
	}
}
