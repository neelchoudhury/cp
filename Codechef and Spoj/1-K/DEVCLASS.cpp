#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	char s[100001];
	char c;
	int type;
	while(t--)
	{
		cin>>type;
		scanf("%s", s);
		int cb=0,cg=0;
		for(int i=0; i<strlen(s); i++)
		{
			if(s[i]=='B')
				cb++;
			else
				cg++;
		}
		if(abs(cb-cg)>=2)
		{
			cout<<-1<<endl;
			break;
		}
		else
		{
			if(type==0)
			{
				int c=0;
				if(cb>cg)
				{
					for(int i=1; i<strlen(s); i++)
					{
						if(s[i]=='B' and s[i-1]=='B')
							c++;	
					}	
				}	
				else
				{
					for(int i=1; i<strlen(s); i++)
					{
						if(s[i]=='G' and s[i-1]=='G')
							c++;	
					}
				}
				cout<<(c)<<endl;
			}	
		}
		
	}
}
