#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

void div(int a[],int n)
{
	int b[n];
	int c[n];
	for(int i=0; i<n; i++)
	{
		b[i]=a[n-1-i];
		c[i]=0;
	}
	int cr=0;
	for(int i=0; i<n; i++)
	{
		c[i]=(10*cr+b[i])/2;
		cr=b[i]%2;
	}
	int flag=0;
	for(int i=0; i<n; i++)
	{
		if(flag==0)
		{
			if(c[i]!=0)
				flag=1;
		}
		if(flag==0)
		{
			if(c[i]==0)
				continue;
		}
		else
			cout<<c[i];
	}
	cout<<endl;
	
}

int main()
{
	char p[201],q[201];
	int n[100];
	int d[100];
	int a[101];
	int b[101];
	int i=10;
	while(i--)
	{
		scanf("%s",p);
		scanf("%s",q);
		for(int i=0;i<100; i++)
		{
			n[i]=0;
			d[i]=0;
			a[i]=0;
			b[i]=0;
		}
		a[100]=0,b[100]=0;
		int m1=strlen(p);
		int m2=strlen(q);
		for(int i=m1-1; i>=0; i--)
		{
			char ch1[2];
			ch1[0]=p[i]; 
			n[m1-1]=atoi(ch1);
			//cout<<a[m-i-1];
		}
		for(int i=m2-1; i>=0; i--)
		{
			char ch1[2];
			ch1[0]=q[i]; 
			d[m2-1-i]=atoi(ch1);
			//cout<<a[m-i-1];
		}
		int cr=0;
		for(int i=0;i<m1+1; i++)
		{
			a[i]=(n[i]+d[i]+cr)%10;
			cr=(n[i]+d[i]+cr)/10;
		}
		cr=0;
		for(int i=0;i<m2+1; i++)
		{
			if(n[i]-d[i]-cr<0)
			{
				b[i]=(n[i]-d[i]-cr+10)%10;
				cr=1;
			}
			else
			{
				b[i]=(n[i]-d[i]-cr)%10; 
				cr=(n[i]-d[i]-cr)/10;
			}
		}
		div(a,m1);
		div(b,m2);
		
	}
	return 0;
}
