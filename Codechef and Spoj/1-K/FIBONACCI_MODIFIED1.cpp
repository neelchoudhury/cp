#include<bits/stdc++.h>
#define ll long double

using namespace std;

ll arr1[25]; 
int r[100][100];
int c[100];

int* mult(int a[], int b[])
{
	memset(r,0,sizeof(r));
	memset(c,0,sizeof(c));
	int n=3;
	int carr=0;
	for(int i=0; i<n; i++)
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
 
	for(int j=0; j<10; j++)
	{
		for(int i=0; i<10;i++)
		{
			c[j]+=r[i][j];
		}
		c[j]+=carr;
	 
			if(c[j]>=10)
			{
				carr=c[j]/10;
				c[j]%=10;
				
			}
			else
			carr=0;
	 
	}
	
	return c;
}

int* add(int a[], int b[])
{
	int n=3;
	memset(c,0,sizeof(c));
	int carr=0;
	int i;
	for( i=0; i<n; i++)
	{
		c[i]=(a[i]+b[i]+carr)%10;
		carr=(a[i]+b[i]+carr)/10;
	}
	if(carr!=0)
	{
		while(carr!=0)
		{
			c[i++]=carr%10;
			carr/=10;
		}
	}
	return c;
}

int main()
{
	//string a,b, ans;
	int n;
	int a[]={1,2,3};
	int b[]={1,2,3};
	int c[6]=mult(a,b);
	int d[6]=add(a,b);
	for( int i=0; i<sizeof(c)/sizeof(int);i++)
		cout<<c[i];
	cout<<endl;
	for( int i=0; i<sizeof(c)/sizeof(int);i++)
		cout<<d[i];
	cout<<endl;
	/*cin>>a>>b>>n;
	memset(arr1,0,sizeof(arr1)); 
	arr1[0]=a, arr1[1]=b;
	for(int i=2; i<n; i++)
	{
		arr1[i]=arr1[i-1]*arr1[i-1] + arr1[i-2];
	}
	for(int i=0; i<n; i++)
		cout<<arr1[i]<<" ";
	cout<<endl;
	printf("%llf\n", arr1[n-1]);*/
	return 0;
}
