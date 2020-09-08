#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[4][5];

int main()
{
	ll len;
	string s;
	cin>>len;
	cin>>s;
 	int x1=0,x2=0,x3=0,x4=0,x5=0;
 	for(int i=0; i<s.length(); i++)
 	{
 		if(s[i]=='1' or s[i]=='2' or s[i]=='3')
 			x1=1;
 		if(s[i]=='7' or s[i]=='9')
 			x2=1;
 		if(s[i]=='0')
 			x3=1;
 		if(s[i]=='1' or s[i]=='4' or s[i]=='7')
 			x4=1;
 		if(s[i]=='3' or s[i]=='6' or s[i]=='9')
 			x5=1;
	}
	if(x1 and x2 and x4 and x5)
		cout<<"YES"<<endl;
	else if(x1 and x3)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
