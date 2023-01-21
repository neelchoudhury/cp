#include<iostream>
#include<cmath>

using namespace std;

bool prime(int x)
{
	for(int i=2; i<=sqrt(x); i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}

int main()
{
	int t=0;
	int x=0,y=0,n=0;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>n;
		int a[y-x+1];
		for(int i=0; i<y-x+1; i++)
		{
			a[i]=0;
		}
		int cntd=0;
		int d=0;
		int k=0;
		for(int i=x; i<=y; i++)
		{
			d=0;
			for(int j=0; j<k; j++)
			{
				if(a[j]!=0 and i%a[j]==0)
				{
					break;
				}
				if(a[j]==0)
				{
					break;
				}
			}
			 for(int j=2;j<=i;j++)
			 {
			 	if(i%j==0)
			 	{
			 		if(prime(j)==true)
			 		{
			 			d++;
			 			a[k]=j;
			 			k++;
			 		}
			 			
			 	}
			 }
			 if(d==n)
			 	cntd++;
		}
		cout<<cntd<<endl;
	}
}

