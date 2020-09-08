#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	char s1[110], s2[110];
	while(t--)
	{
		cin>>s1;
		cin>>s2;
		int mini=0,maxi=0;
		int len=strlen(	s1);
		for(int i=0; i<len; i++)
		{
			if(s1[i]!=s2[i] and (s1[i]!='?' and s2[i]!='?' ))
				mini++, maxi++;
			if(s1[i]=='?' or s2[i]=='?')
				maxi++;
		}
		cout<<mini<<" "<<maxi<<endl;
	}
	return 0;
}
