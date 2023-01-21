#include<iostream>

using namespace std;

void f(int x,int y, int a[],int n,int cnt)
{
	if(a[x-1]!=0 and a[y-1]!=0)
	{
		int s=a[x-1]<a[y-1]?a[x-1]:a[y-1];
		int b=a[x-1]>a[y-1]?a[x-1]:a[y-1];
		for(int i=0; i<n; i++)
		{
			if(a[i]==b)
				a[i]=s;
		}
	}
	else if (a[x-1]==0 and a[y-1]!=0)
	{
		a[x-1]=a[y-1];
	}
	else if (a[y-1]==0 and a[x-1]!=0)
	{
		a[y-1]=a[x-1];
	}
	else
	{
		a[x-1]=cnt;
		a[y-1]=cnt;
	}
}

int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0; i<n; i++)
		a[i]=0;
	int t,x,y;
	int cnt=1;
	while(q--)
	{
		cin>>t>>x>>y;
		if(t==0)
		{
			f(x,y,a,n,cnt);
			cnt++;
		}
		else if(t==1)
		{
			if(a[x-1]==a[y-1] and a[x-1]!=0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
		
	}
	return 0;
}
