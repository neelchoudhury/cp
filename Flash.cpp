#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[1001];
		cin>>s;
		int in=0,fn=0;
		int ln=0;
		for(int i=1; s[i]!='\0';i++)
		{
		//	in=0;
		
			for(int j=in;j<i;j++ )
			{
				if(s[i]==s[j])
				{
					in=j+1;
					
				}
				fn=i;
				//cout<<in<<" "<<fn<<endl;
			}
			if(fn-in+1>ln)
				ln=fn-in+1;
		}
		cout<<ln<<endl;
	}
	return 0;
}
