#include<iostream>
#include<cmath>

using namespace std;

int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	int t,n,d;
	t=0;
	n=0;
	d=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		int a[n];
		//int b[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			//b[i]=a[i];
		}
		int in1=n-1,in2=n-1;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(abs(a[i]-a[j])>=d  )
				{
					if(max(i,j)<max(in1,in2))
					{
						in1=i;
						in2=j;
					}
				}	
			}
		}
		int cnt=1;
		int mn=0;
		int mx=0;
		//cout<<"ind "<<in1<<" "<<in2<<endl;
		if(in1>in2)
		{
			mx=in1;
			mn=in2;
		}
		else
		{
			mx=in2;
			mn=in1;
		}
		//cout<<mn<<" "<<mx<<endl;
		cnt=cnt + (mn+1)/2 +(mx-mn+1)/2;
		cout<<cnt<<endl;
	}
	return 0;
}
