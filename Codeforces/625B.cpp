#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll KMP(string t,string p)
{
	ll i,j,count,m,n;
	m=p.length();
	n=t.length();
	count=0;
	ll a[m];
	a[0]=0;
	for(i=1,j=0;i<m;++i)
	{
		while(j>0&&p[j]!=p[i]) 
		j=a[j-1];
		if(p[j]==p[i])
		{
			a[i]=j+1;
			j++;	
		}
		else
		a[i]=0;
	}
	for(i=0,j=0;i<n and j<m;++i)
	{
		while(j!=0&&t[i]!=p[j])
		{
			j=a[j-1];
		}
		if(t[i]==p[j])
		{
			j++;
			if(j==m)
			{
				count++;
				//j=a[j-1];
				j=0;
			}
		}
	}
	return count;
}

int main()
{
	string t,p;
	cin>>t>>p;
	cout<<KMP(t,p)<<endl;
	return 0;
}
