#include<iostream>
#include<string.h>
#define N 100
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	char a[N];
	int cnt=t;
	while(cnt--)
	{
		cin>>a;
		ll i=0,c=0,d=0;
		for(;i<strlen(a);i++)
		{
			
			if(a[i]=='<')
			{
				c+=1;
			}
			else if(a[i]=='>')
			{
				d+=1;
			}
			if(a[0]=='>')
			{
				d-=1;
			}
			if(i<strlen(a)-1 and ((i)%2==0)and(c-d==0)and a[i+1]=='>')
			{
				c-=1;
				d-=1;
			}
			
			
			
			
		}
		
		cout<<(c>d?2*d:2*c)<<endl;
	    }
	return 0;
}
