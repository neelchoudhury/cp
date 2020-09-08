#include<bits/stdc++.h>
#define ll long long int

using namespace std;

//char a[10000][10000];
//ll ;

vector<string> a;
//vector<vector<ll>> b;
char c[1000010];
vector<ll> d;

int main()
{
	ll t,n,m;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &m);
		a.clear();
	//	b.clear(); 
	/*	for(ll i=0; i<=2000; i++)
		{
			for(ll j=0; j<=2000; j++)
				b[i][j]=0;
		}*/
		for(ll i=0;i<n; i++)
		{
			// c.clear();
		 	scanf("%s", c);
		 	a.push_back(c);
		 	 
		} 
		ll ans=0;
		ll cnt=0;
		for(ll i=1; i<=n-1; i++)
		{
			
			for(ll j=1; j<=m-1; j++)
			{
				cnt=0;
				if(a[i-1][j-1]!=a[i-1][j])
				 	cnt++;
				if(a[i-1][j-1]!=a[i][j-1])
					cnt++;
				if(a[i][j-1]!=a[i][j])
					cnt++;
				if(a[i][j]!=a[i-1][j])
					cnt++;
				if(cnt%2==1)
						ans++ ;
				//cout<<i<<" "<<j<<" "<<cnt<<endl;
			}
			
		}
		
		for(ll i=1; i<m; i++)
		{
			if(a[0][i]!=a[0][i-1])
				ans++;
			if(a[n-1][i]!=a[n-1][i-1])
				ans++;
		}
		for(ll i=1; i<n; i++)
		{
			if(a[i][0]!=a[i-1][0])
				ans++;
			if(a[i][m-1]!=a[i-1][m-1])
				ans++;
		}
		
	 
		
		/*for(ll i=0; i<=2*n; i++)
		{
			for(ll j=0; j<=2*m; j++)
			{
				if(i==0 or i==2*n or j==0 or j==2*m)
				{
					if(b[i][j]==1)
						ans+=1 ;
				}
				else
				{
					
					if(b[i][j]==1)
					{
						if(j<2*m and b[i][j+1]==1)
							cnt++;
						if(i<2*n and b[i+1][j]==1)
							cnt++;
						if(j>0 and b[i][j-1]==1)
							cnt++;
						if(i>0 and b[i-1][j]==1)
							cnt++;
					}
					//cout<<i<<" "<<j<<" "<<cnt<<"  hh"<<endl;
					if(cnt%2==1)
						ans++ ;
				}
			}
		}*/
		printf("%lld\n",ans/2);
	}
	return 0;	
}
