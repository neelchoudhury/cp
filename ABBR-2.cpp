#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool f(string str1, string str2)
{
   ll j = 0; 
   ll m=str1.length(),n=str2.length(); 
   for (ll i=0; i<n&&j<m; i++)
       if (str1[j] == str2[i])
         j++; 
   return (j==m);
}

int main()
{
	ll q;
	string a,b;
	cin>>q;
	while(q--)
	{
		//memset(dp,0,sizeof(dp));
		cin>>a>>b;
		transform(a.begin(),a.end(),a.begin(),::tolower);
		transform(b.begin(),b.end(),b.begin(),::tolower); 
		if(f(b,a))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
