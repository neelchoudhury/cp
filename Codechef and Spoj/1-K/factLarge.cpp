#include<iostream>
#include<cmath>

using namespace std;

int* fact(int m, int n,int a[], int b[])
{
	
	 int r[m+n][m+n];
		int c[m+n];
	for(int i=0; i<m+n; i++)
	{
		for(int j=0; j<m+n; j++)
		{
			r[i][j]=0;
		}
		c[i]=0;
		if(i<m)
			a[i]=0;
		if(i<n)
			b[i]=0;
	}

//	cin>>aa>>bb;
	for(int i=0; i<m;i++)
	{
		cin>>a[m-i-1];
		//a[i]=aa%10;
		//aa/=10;
		//cout<<a[i];	 
	}
	cout<<endl;
	for(int i=0; i<n;i++)
	{
		cin>>b[n-i-1];
		//b[i]=bb%10;
		//bb/=10;
		//cout<<b[i];	
	}
	cout<<endl<<endl<<endl;
	int carr=0;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n;j++ )
		{
			
			if(j==n-1)
			{
				r[i][j+i]=(a[i]*b[j]+carr);
				carr=0;
			}
			else
			{
				r[i][j+i]=(a[i]*b[j]+ carr)%10;
				carr=(a[i]*b[j]+ carr)/10;
			}
		}
	}
 
	carr=0;
 
	for(int j=0; j<m+n; j++)
	{
		for(int i=0; i<m+n;i++)
		{
			c[j]+=r[i][j];
		}
		c[j]+=carr;
	 
			if(c[j]>=m+n)
			{
				carr=c[j]/10;
				c[j]%=10;
				
			}
			else
			carr=0;
	 
	}
	facr(m+2,)
//	cout<<endl<<endl;
	/*for(int i=m+n-1; i>=0;i--)
	{
		cout<<c[i];
	}*/
	return c;
	
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int res[1]={0};
		if(n<100)
		{
			int a[n][2];
			int k=n;
			for(int i=0; i<k; i++)
			{
				
				a[i][0]=n%10;
				a[i][1]=n/10;
				n-=1;
			}
		 	for(int i=0; i<k; i++)
		 	{
		 		res=fact(2,1,res,&a[i][0]);	
		 	}
		 	cout<<res<<endl;
			 
			
		}
	/*	if(n==100)
		{
			int a[n][3];
			int a[0]={1,0,0};
			int k=n;
			for(int i=0; i<k; i++)
			{
				n-=1;
				a[i][0]=n%10;
				a[i][1]=n/10;
				a[i][2]=0;
			} 
				fact(a,3);
			}*/		
		}
}
