#include<bits/stdc++.h>
#define ll long long int
#define N 100010
 
using namespace std;
 
ll a[N];
vector<ll> v;
 
/*void bin(vector<ll> &v, ll x)
{
	
}*/
 
int main()
{
	int t,n;
	cin>>t;
	vector<ll>:: iterator ii;
	while(t--)
	{
		cin>>n;
		for(int i=0; i<n; i++)
			scanf("%lld", &a[i]);
		for(int i=0; i<n; i++)
		{
			/*if(a[i]==18)
				cout<<"sgbvkwbg "<<v[v.size()-1]<<endl;*/
			if(i==0)
				v.push_back(a[i]);
			else
			{
				if(a[i]>=v[v.size()-1])
				{
					v.push_back(a[i]); /*cout<<a[i]<<" "<<endl;*/}
				else
				{
					if(v[v.size()-2]<=a[i])
						v[ v.size()-1]=a[i];
					else if((i!=n-1 and a[i]<=a[i+1]) )
					{
					for( ii=v.begin();ii<v.end();ii++)
					{
						if( (*ii)>a[i])
						{	*(ii)=a[i]; 
							break;}
					}
					}
					else if(i==n-1)
					{
						for( ii=v.begin();ii<v.end();ii++)
					{
						if( (*ii)>a[i])
						{	*(ii)=a[i]; 
							break;}
					}
					}
				}
			}
			
		}
		printf("%d ",v.size());
		for( ii=v.begin(); ii<v.end(); ii++)
			printf("%lld ", *(ii));
		cout<<endl;
		v.clear();
	}
	return 0;
} 
