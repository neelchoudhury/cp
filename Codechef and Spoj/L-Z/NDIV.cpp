#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll a,b,n;
	cin>>a>>b>>n;
	ll x[b-a];
	ll k=0;
	ll cnt=0, nod=0;
	for(ll i=a; i<=b; i++)
	{
		if(k!=0)
		{
			for(int j=0; j<=k;j++ )
			{
				if(i%x[j]==0)
					continue;
			}
		}
		if(i!=1)
		{
		
			nod=2;
	
			ll j;
			for( j=2; j<=sqrt(i); j++)
			{
				if(i%j==0)
					nod+=2;
				if(nod>n)
					break;
			}
			if(pow((ll)sqrt(i),2)==i)
				nod-=1;
		
		}
		else
			nod=1;
			
		
		if(nod==n)
		{
			cnt++;
			x[k++]=i;
		}
	}
	/*for(int i=0; i<=k; i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;*/
	printf("%lld\n", cnt);
}
