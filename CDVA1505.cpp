#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int k,n;
	cin>>k;
	while(k--)
	{
		cin>>n;
		ll a[n];
		for(int i=0; i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		/*for(int i=0; i<n; i++)
			cout<<a[i]<<" ";
		cout<<endl;*/
		int cnt=1;
		ll t=a[0];
		for(int i=1; i<n; i++ )
		{
			 if(a[i]!=a[i-1])
			 	cnt++;
		}
		//cout<<endl;
		printf("%d\n", cnt);
	}
	return 0;
}
