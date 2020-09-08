#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,t;
	cin>>n>>t;
	char a[55];
	scanf("%s", a);
	char c;
	for(int i=1; i<=t; i++)
	{
		for(int j=1; j<n; j++)
		{
			if(a[j]=='G' and a[j-1]=='B')
			{
				c=a[j];
				a[j]=a[j-1];
				a[j-1]=c;
				j++;
			}
		}
	}
	printf("%s\n", a);
}

