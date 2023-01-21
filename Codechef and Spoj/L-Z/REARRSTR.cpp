#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	char a[100005];
	int b[130];
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%s", a);
		memset(b,0,sizeof(b)); 
		ll l=strlen(a);
		cin.ignore();
		for(ll i=0;i<l; i++)
		{
			b[a[i]]++;
		}
		int flag=0;
		for(ll i=0; i<130;i++)
		{
				if(b[i]>=(l-b[i]+2))
			{
				flag=1;
				break;
			}
		}
		if(flag)
		{
			cout<<-1<<endl;
		}
		else
		{
		 ll c[130];
			for(int i=0; i<130; i++)
				c[i]=b[i]; 
			sort(c,c+130);
			int t;
			for(int i=0;i<=65; i++)
			{
				t=c[i];
				c[i]=c[129-i];
				c[129-i]=t;
			}
		 	char d[l+1];
			int k=0;
				int x=0;
			for(int i=0; i<26; i++)
			{
				if(c[i]==0)
					break;
				x++;
			}
			int q=0;
			 	for(int i=0; i<x; i++)
			{
				for(int j=97; j<=122;j++)
				{
					if(c[i]==b[j])
					{
					 	q=c[i];
					 	while(q--)
					 	{
							d[k]=(char)j;
							k++;
						}
						b[j]=0; 
					}		
				}
			}
		 char e[l+1];
			int j=0;
		 	if(l%2==0)
			{
				for(int i=0; i<l/2; i++)
				{
					e[j++]=d[i];
					e[j++]=d[l/2+i];
				}
			}
			else
			{
				for(int i=0;i<l/2; i++)
				{
					e[j++]=d[i];
					e[j++]=d[i+l/2+1];
				}
				e[j]=d[l/2];
			}
			for(int i=0; i<l; i++)
				cout<<e[i];
			cout<<endl;
		}
	}
	return 0;
}
