#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char p[15],t;
	cin>>p;
	int l=strlen(p);
	int a[l];
	int i=1,j=0;
	a[0]=0;
	for(; i<l; j++ )
	{
		//cout<<"1"<<endl;
		if(p[j]==p[i])
		{
			cout<<"hhh i "<<i<<" j "<<j<<endl;
			a[i]=j+1; 
			j++; 
		}
		else
		{
			//cout<<"!"<<endl;
			 while(j>0 and p[i]!=p[j])
			 	j=a[j-1],cout<<"dd "<<j<<endl;
			cout<<i<<" "<<j<<endl;
			 if(a[i]==a[j])
			 {
			 	cout<<"qq i "<<i<<" j "<<j<<endl;
			 	a[i]=j+1;
			 	j++; 
			 }
			 else
			{
				a[i]=0; 
			}
			 
		}
	}
	for(int i=0; i<l; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	//cout<<a[0]<<endl;
	return 0;
}
