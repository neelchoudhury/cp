#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
 
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	int q;
	scanf("%d",&q);
	while(q--)
	{
		int k;
		scanf("%d",&k);
		int count=0;
		for(int i=0;i<n;++i)
		{
			int min=1000001;
			for(int j=i;j<n;++j)
			{
				if(a[j]<min)
				min=a[j];
				if(min==k)
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
} 
