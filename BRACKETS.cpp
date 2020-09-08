#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int f( string s )
{
		int balance = 0;
		int max_balance = 0;
		for(int i=0;i<s.length(); i++)
		{
			if (s[i] == '(') balance = balance + 1;
			if (s[i] == ')') balance = balance - 1;
			max_balance = max( max_balance, balance );
		}
		return  max_balance;
}

int main()
{
	int t;
	string a="\0",b="\0";
	cin>>t;
	while(t--)
	{
		a="\0";
		cin>>a;
		b="\0";
		cin.ignore();
		int fa=f(a);
		//cout<<fa<<endl;
		int c1=0,c2=0;
	/*	for(int i=0;i<a.length(); i++)
		{
			if(a[i]=='(')
				c1++;
			else
				c2++;
		}*/
		for(int i=0; i<2*fa; i++)
		{
			if(i<fa)
				cout<<"(";
			else
				cout<<")";
				
		}
		cout<<endl;
		//cout<<f(b)<<endl;
	}
	return 0;
}
