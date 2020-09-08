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
			int sum1=0, sum2=0;
			int freq1=0, freq2=0;
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
				//	cout<<j<<": "<<c[j];
				}
				else
				{
					i++;
				}
			}
			
			for(int i=0; c[i]<b[0]; i++)
			{
				sum1+=c[i];
				//cout<<sum1
			}
			for(int i=0; i<n-k;i++)
			{
				sum2+=c[i];
			//	cout<<sum2<<" ";
			}
			//cout<<endl;
			for(int i=0; i<k; i++)
			{
				if(b[i]<=n/2)
					freq1+=1;
				else
				{
					freq2=k-freq1;
					break;
				}				
			}
			//cout<<"SUm1: "<<sum1<<" Sum2: "<<sum2<<" freq1: "<<freq1<<" freq2: "<<freq2<<endl;
			if(freq1>freq2)
			{
				//cout<<"First block entered:"<<endl;
				int d[n-k];
				for(int i=0; i<n-k; i++)
				{
					d[i]=c[n-k-1-i];
				}
				for(int i=sum1; i<=sum2+1;i++)
				{
					//cout<<"This is for i: "<<i<<endl;
					if(subsum(d,n-k,i)==false)
					{
						if(i%2==0)
							cout<<"Mom"<<endl;
						else
							cout<<"Chef"<<endl;
						break;
					}
				}
			}
			else if(freq2>=freq1)
			{
			//	cout<<"Second block entered"<<endl;
				for(int i=sum1; i<=sum2+1;i++)
				{
					//cout<<"This is for i: "<<i<<endl;
					if(subsum(c,n-k,i)==false)
					{
						if(i%2==0)
							cout<<"Mom"<<endl;
						else
							cout<<"Chef"<<endl;
						break;
					}
				}	
			}
	 		
		}
		
		
	}
	return 0;
}


