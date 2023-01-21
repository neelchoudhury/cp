#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string s1="I love";
	string s2="I hate";
	string s3="that";
	string s4="it";
	int n;
	string ans="";
	cin>>n;
	for(int i=0;i<n; i++)
	{
		if(i!=0)
		{
			ans+=" "+s3+" ";
		}
		if(i%2==0)
		{
			ans+=s2;
		}
		else
		{
			ans+=s1;
		}
	}
	ans+=" "+s4;
	cout<<ans<<endl;
	return 0;
}