#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{ 
	ll n;
	cin>>n;
	string a;
	cin>>a; 
	if(!(a[3]>='0' && a[3]<='5'))
	{
		a[3]='0';
	}
	if(n==12)
	{
		if(a[0]=='1' && a[1]> '2')
		{
			a[0]='0'; 
		}
		else if(a[0]=='0' && a[1]=='0')
		{ 
			a[1]='1';
		}
		else if(a[0]>'1')
		{
			if(a[1]=='0')
			{
				a[0]='1';
			}
			else
			{
				a[0]='0';	
			}
			
		}
	}
	else
	{
		if(a[0]=='2' && a[1]>'3')
		{ 
			a[0]='1';
		}
		else if(a[0]>'2')
		{ 
			a[0]='1';
		}
	}
	cout<<a<<endl;
	return 0;

}
