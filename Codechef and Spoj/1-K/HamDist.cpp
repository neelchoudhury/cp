#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int t;
	char s1[1000], s2[1000];
	cin>>t;
	while(t--)
	{
		cin>>s1;
		cin>>s2;
		if(strlen(s1)!=strlen(s2))
			cout<<-1<<endl;
		else
		{
			int cnt=0;
			for(int i=0; i<strlen(s1);i++)
			{
				if(s1[i]!=s2[i])
				{
					cnt++;
				}
			}
			cout<<cnt<<endl;
		}
	}
}
