#include<iostream>
#include<algorithm>
#define ll long long int

using namespace std;

bool subsum(int set[], int n, int sum)
{
   
    bool subset[sum+1][n+1];
 
    
    for (int i = 0; i <= n; i++)
      subset[0][i] = true;
 
    
    for (int i = 1; i <= sum; i++)
      subset[i][0] = false;
 
     
     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] || subset[i - set[j-1]][j-1];
       }
     }
 	return subset[sum][n];
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
		int b[k];
		for(int i=0; i<k; i++)
		{
			cin>>b[i];
		}
		sort(b,b+k);
		for(int i=0; i<n; i++)
		{
			a[i]=i+1;
		}
		for(int i=0; i<n;i++)
		{
			for(int j=0; j<k;j++)
			{
				if(a[i]==b[j])
				{
					a[i]=0;
					break;
				}
			}
		}
		int c[n-k];
		for(int i=0,j=0;i<n,j<n-k;i++,j++)
		{
			if(a[i]==0)
			{
				c[j]=a[i+1];
				i+=1;
			}
			else
				c[j]=a[i];
		}
		/*for(int i=0; i<n-k; i++)
		{
				cout<<c[i]<<" ";
		}
		cout<<endl;*/
	 	for(int i=1; i<n*(n+1)/2;i++)
		{
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
	return 0;
}


