#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#define ll long long int
using namespace std;

int main()
{
	int a[200];
	string aa,bb;
	int b[200];
	int r[400][400];
		int c[400];
	for(int i=0; i<400; i++)
	{
		for(int j=0; j<400; j++)
		{
			r[i][j]=0;
		}
		c[i]=0;
	}

	cin>>aa>>bb;
	reverse(aa.begin(), aa.end());
	reverse(bb.begin(), bb.end());
	for(ll i=0; i<aa.length(); i++)
	{
		a[i]= aa[i]-'0';
	}
	// for(ll i=0; i<200; i++)
	// 	cout<<a[i];
	// cout<<endl;
	// cout<<endl;
	for(ll i=0; i<bb.length(); i++)
	{
		b[i]= bb[i]-'0';
	}
	cout<<endl<<endl<<endl;
	int carr=0;
	for(int i=0; i<aa.length(); i++)
	{
		for(int j=0; j<bb.length();j++ )
		{
			
			if(j==bb.length()-1)
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
 
	for(int j=0; j<aa.length()+bb.length(); j++)
	{
		for(int i=0; i<aa.length()+bb.length();i++)
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
	int cnt = 0;

	cout<<endl<<endl;
	for(int i=aa.length()+bb.length()-1; i>=0;i--)
	{
		cout<<c[i];
		if(c[i]!=0)
			cnt++;
	}
	cout<<endl;
	cout<<cnt<<endl;
	return 0;
}
