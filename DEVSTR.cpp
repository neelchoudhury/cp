#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int  main()
{
	ll t, n,k,i,j,f,cnt;
	ll a[100004][2];
	string s="";
	scanf("%lld", &t);
	while(t--)
	{
		s="";
		cnt=0;
		scanf("%lld %lld", &n, &k);
		cin.ignore();
		getline(cin,s);
		j=0,f=0;
		for(int i=0; i<s.length(); i++)
		{
			a[i][0]=0;
			a[i][1]=0;
		}
		for(i=1; i<s.length();i++)
		{
			if(s[i]==s[i-1])
				a[j][1]++;
			else
				{
					j++;
					a[j][0]=i;
					a[j][1]=i;					
				}		
		}
		for(i=0;i<j;i++)
		{
			if(a[i][1]-a[i][0]+1>k)
			{
				cnt++;
				if((a[i][1]-a[i][0]+1)%2)
				{
					s[(a[i][1]+a[i][0]+1)/2]=(s[a[i][0]]=='0'?'1':'0');
					f=0;
				}
				else
				{
					if(f==1 or f==0)
					{
						f==-1;
						s[(a[i][1]+a[i][0]+1)/2]=(s[a[i][0]]=='0'?'1':'0');
					}
					else if(f==-1) 
					{
						f=1;
						s[(a[i][1]+a[i][0])/2]=(s[a[i][0]]=='0'?'1':'0');
					}
					
				}
					
			}
		}
		printf("%lld\n",cnt);
		cout<<s<<endl;
	}
}
