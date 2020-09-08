#include<bits/stdc++.h>

using namespace std;

void f(int x,int y,int a,int b, int s[],int n)
{
	 if(x==a )
	 {
	 	s[y-1]=1;
	 	//s[x-1]=0;
	 }
	 else if(y==a)
	 {
	 	s[x-1]=1;
	 }
	 else if(y==b)
	 {
	 	if(s[x-1]+1<s[y-1])
	 		s[y-1]=s[x-1]+1;
	 }
	 else if(x==b)
	 {
	 	if(s[y-1]+1<s[x-1])
	 		s[x-1]=s[y-1]+1;
	 }
	 else
	 {
	 	s[y-1]=min(s[x-1]+1,s[y-1]);
	 	s[x-1]=min(s[y-1]+1, s[x-1]);
	 }
	 if(y==b)
	 {
	 	if(s[x-1]+1<s[y-1])
	 		s[y-1]=s[x-1]+1;
	 }
}
 

int main()
{
	int t;
	int n,a,b;
	cin>>t;
	int cnt=1;
	while(t--)
	{
		cin>>n>>a>>b;
		cnt=1;
		int c,d;
		int s[n-1];
		for(int i=0; i<n-1; i++)
		{
		 
				s[i]=999999;
		}
		s[a-1]=0;
		for(int i=0; i<n-1; i++)
		{
			cin>>c>>d;
			f(c,d,a,b,s,n-1);
			cnt++;
				for(int i=0; i<n-1; i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
		}
		for(int i=0; i<n-1; i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
		cout<<s[b-1]<<endl;
		
	}
}
