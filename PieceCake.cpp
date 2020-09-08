#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	char s[51];
	while(t--)
	{
		cin>>s;
		int l=strlen(s);
		int a[l];
		for(int i=0;i<l; i++)
			a[i]=0;
		sort(s,s+l);
		int cnt=0;
		for(int i=1; i<l; i++)
		{
			if(s[i]==s[i-1])
			{
				cnt++;
			}
			else
			{
				if(cnt==l-cnt)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cnt=0;
				}
			}
		}
		cout<<"NO"<<endl;
	}
	return 0;
}
