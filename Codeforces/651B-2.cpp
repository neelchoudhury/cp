#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 300
#define K 510
#define N 55
#define MAX 310
#define maxs 125
#define INF INT_MAX

using namespace std; 

ll arr[1010];

int main()
{
	int n,temp;
	cin>>n;
	for(int i=0;i<=1000;i++)
	{
		arr[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		arr[temp]++;
	}
	int ma=0;
	int sum=0;
	for(int i=1;i<=1000;i++)
	{
		if(ma==0)
		{
			ma+=arr[i];
		}
		else
		{
			if(arr[i]>ma)
			{
				sum+=ma;
				ma=0;
				ma+=arr[i];
			}	
			else
			{
				sum+=arr[i];
				ma-=arr[i];
				ma+=arr[i];
			}	
		}
	}
	cout<<sum<<endl;
	return 0;
}