#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char p[15],t[100];
	cin>>p;
	int l=strlen(p);
	int a[l];
	int i=1,j=0;
	a[0]=0;
	for(; i<l; )
	{
		//cout<<"1"<<endl;
		if(p[j]==p[i])
		{
			a[i]=j+1; 
			j++;
			i++;
		}
		else
		{
			cout<<"!"<<endl;
			 while(j>0 and a[i]!=a[j])
			 	j=a[j-1],cout<<1<<endl;
			
			 if(a[i]==a[j])
			 {
			 	a[i]=j+1;
			 	j++;
			 	i++;
			 }
			 else
			{
				a[i]=0;
				i++;
			}
			 
		}
	}
	for(int i=0; i<l; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	cin>>t;
	j=0;
	for(int i=0;i<strlen(t); i++)
	{
		if(j==l)
		{
			cout<<"Found at : "<<i<<endl;
		}
		if(t[i]==p[j])
			j++;
		else if(t[i]!=p[j])
		{
			j=a[j-1];
		}
	}
	
	return 0;
}
