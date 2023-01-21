#include<iostream>

using namespace std;

int main()
{
	int t;
	char s[1000];
	cin>>t;
	while(t--)
	{
		cin>>s;
		unsigned int sm=0;
		for(int i=0; s[i]!='\0';i++)
		{
			//cout<<(int)s[i]<<" ";
			sm+=((int)s[i]-96);
		}
		cout<<sm<<endl;
	}
	return 0;
}
