#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string s,c;
	int n;
	cin>>s;
	cin>>n;
	while(n--)
	{
		cin>>c;
		int f=0;
		for(int i=0; i<c.length(); i++)
		{
			//string cc=c[i];
			int k=0;
			for(int j=0;j<s.length(); j++)
			{
				if(c[i]==s[j])
				{
					k=1;
					break;
				}
			}
			if(k==0)
			{
				f=1;
				break;
			}
		}
		if(f==1)
			cout<<"No"<<endl;
		else 
			cout<<"Yes"<<endl;
	}
	return 0;
}
