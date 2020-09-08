#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	char s1[15], s2[15];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", s1);
		scanf("%s", s2);
		int len=strlen(s1);
		int f=0;
		for(int i=0; i<len; i++)
		{
			if((s1[i]!='?' and  s2[i]!='?') and s1[i]!=s2[i])
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
