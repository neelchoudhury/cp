#include<iostream>
#include<algorithm>
#define ll long long int

using namespace std;

ll subsum(ll a[], int n,ll sum, int x)
{
	if(sum==0)
	{
		return (x-n);
	}
	else if(n==0 and sum!=0)
	{
		return 0;
	}
	else
	{
		return subsum(a,n-1,sum,x-1) + subsum(a,n-1,sum-a[n-1],x);
	}
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		ll a[n];
		ll sum=0;
		ll p=0;
		for (int i=0; i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(k<=n)
		 
		{
			if(sum%k==0)
			{
				p=sum/k;
				ll b=subsum(a,n,p,n);
				if(b==n)
					cout<<b<<" yes "<<endl;
				else
					cout<<b<<" no  "<<endl;			
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
	
}
