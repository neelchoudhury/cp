#include<bits/stdc++.h>
#define ll long double



using namespace std;

ll arr1[25]; 

int main()
{
	ll a,b;
	int n;
	scanf("%lld %lld %lld", &a, &b, &n);
	memset(arr1,0,sizeof(arr1)); 
	arr1[0]=a, arr1[1]=b;
	for(int i=2; i<n; i++)
	{
		arr1[i]=arr1[i-1]*arr1[i-1] + arr1[i-2];
	}
	for(int i=0; i<n; i++)
		cout<<arr1[i]<<" ";
	cout<<endl;
	printf("%llf\n", arr1[n-1]);
	return 0;
}
