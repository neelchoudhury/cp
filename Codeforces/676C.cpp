#include<bits/stdc++.h>

using namespace std;

char s[100008];

int main()
{
	int n,k;
	cin>>n>>k;
	cin>>s;
	int p1=0,p2=0;
	int ans=0;
 	for(int i=0; i<n; i++)
 	{
 		if(s[i]=='a')
		 	p1++;
		else 
			p2++;
		if(min(p1,p2)<=k)
			ans=max(ans,p1+p2);
		else
		{
			if(s[i-p1-p2+1]=='a')
				p1--;
			else
				p2--;
		}
	}
	cout<<ans<<endl;
	return 0;
}
