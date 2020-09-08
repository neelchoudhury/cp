#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	ll n,l;
	ll c,p,q,x;
	ll s=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>l;
		ll a[n];
	
		
		for(int i=0; i<n; i++)
			a[i]=0;
		while(l--)
		{
			cin>>c;
			if(c==0)
			{
				cin>>p>>q>>x;
				for(int i=p-1; i<=q-1; i++)
					a[i]+=x;
			}
		
			else if (c==1)
			{
				cin>>p>>q;
				s=0;
				for(int i=p-1; i<=q-1; i++)
					s+=a[i];
				//cout<<s<<endl;
				printf("%lld\n", s);
			}
				/*for(int i=0; i<n; i++)
			cout<<a[i]<<" ";
			cout<<endl;*/
		}
	}
	return 0;
}
