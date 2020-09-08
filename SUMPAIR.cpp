#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define Max 100005
#define sc(n) scanf("%lld" , &n)
using namespace std;
 
int arr[Max];
int diff[Max];
 
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n , k;
		cin>>n>>k;
 
		for(int i=0 ; i<n ; i++)
		{
			cin>>arr[i];
		}
		sort(arr , arr+n);
       ll sum = 0;
		for(int i=0 ; i<n-1 ; i++)
		{
			diff[i]= arr[i+1]-arr[i];
		}
 
		for(int i=n-2 ; i>=0 ; i--)
		{
			if(diff[i]<k)
			{
				sum+=arr[i+1];
				sum += arr[i];
				i--;
			}
			
		}
		cout<<sum<<endl;
 
	}
 
	return 0;
} 
