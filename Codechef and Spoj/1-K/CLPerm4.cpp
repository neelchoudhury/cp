#include<iostream>
#include<algorithm>
#define ll long long int

using namespace std;

bool subsum(int set[], int n, int sum)
{
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;
   if (set[n-1] > sum)
     return subsum(set, n-1, sum);
   return subsum(set, n-1, sum) || subsum(set, n-1, sum-set[n-1]);
}

int main()
{
	int t,n,k;
	int arr[7]={1,2,4,8,16,32,64};
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
			ll sum=0;
		sum=n*(n+1)/2;
		if(k==0)
		{
			if(sum%2==0)
			{
				cout<<"Chef"<<endl;
			}
			else
			{
				cout<<"Mom"<<endl;
			}
		}
		else
		{
			int a[n];
			int c[n-k];
			int b[k];
			int sum1=0, sum2=0,sum3[n-k];
		 
			for(int i=0; i<k; i++)
			{
				cin>>b[i];
			}
			sort(b,b+k);
			a[0]==1;
			for(int i=0; i<n; i++)
			{
				a[i]=i+1;
			}
			for(int i=0,j=0; i<n ; )
			{
			 	if(b[j]==a[i])
			 	{
			 		a[i]=0;
					 j++;
			 		i++;
			 	}
			 	else
			 	{
			 	 
			 		i++;
			 	 
			 	}
			}
			for(int i=0,j=0; j<n-k;)
			{
				if(a[i]!=0)
				{
					c[j]=a[i];
					i++;
					j++; 	 
				}
				else
				{
					i++;
				}
			}
			                                 
		 
			for(int i=0; i<n-k;i++)
			{
				sum2+=c[i];
			//	cout<<sum2<<" ";
			}
			int qw=0;
			for(int i=0;i<n-k;i++)
			{
				for(int j=qw; c[i]<=arr[j]; j++)
				{
					if(c[i]==arr[j])
						qw++;
					else
						break;
				}	
			}
			//cout<<qw<<endl;
			if(qw==7)
			{
				cout<<"Chef"<<endl;
			}
			else
			{
				int sum4=0;
				for(int i=0; i<qw;i++)
				{
					sum4+=arr[i];
				}
				for(int i=sum4; i<=sum2;i++)
				{
					
					if(subsum(c,n-k,i)==false)
					{
						if(i%2==0)
							cout<<"Mom"<<endl;
						else
							cout<<"Chef"<<endl;
						break;
					}
					if(i==sum2)
					{
						if(i%2!=0)
							cout<<"Mom"<<endl;
						else
							cout<<"Chef"<<endl;
					}
					 
					 
				}	
			}
			
		 
			
			 
	 		
		}
		
		
	}
	return 0;
}


