#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--)
	{
		string a;
		
		cin.ignore();
		getline(cin,a);
		ll x=0,s=0;
		char ch=' ';
		for(int i=0;i<a.length();i++)
		{
			x=0;
				if(i==0 and a[i]>='0' and a[i]<='9')
			{
				x=a[i]-'0';
				i++;
				while(a[i]>='0' and a[i]<='9')
				{
					x=x*10+(a[i]-'0');
					i++;
				}
				i--;
				s=x;
				//cout<<x<<" "<<s<<" "<<i<<endl;
			}
			if(a[i]=='+' or a[i]=='-' or a[i]=='*' or a[i]=='/' )
			ch=a[i];
			
			if(i!=0 and a[i]>='0' and a[i]<='9')
			{
				x=a[i]-'0';
				i++;
				while(a[i]>='0' and a[i]<='9')
				{
					x=x*10+(a[i]-'0');
					i++;
				}
				i--;
				if(ch=='+')
				s=s+x;
			else if (ch=='-')
				s=s-x;
			else if (ch=='*')
				s=s*x;
			else if(ch=='/')
				s=s/x;
				//cout<<x<<" "<<s<<" "<<i<<endl;
			}
		
				
				
		}
		printf("%lld\n", s);
	}
	return 0;
}
