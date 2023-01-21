#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	char s[405];
	while(t--)
	{
		scanf("%s",s);
		stack<char> a;
		stack<char> b;
		int l=strlen(s);
		for(int i=0;i<l; i++)
		{
			if(s[i]>='a' and s[i]<='z')
			{
				a.push(s[i]);
				//cout<<"a.top   "<<a.top()<<endl;
			}
			if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' or s[i]=='^' )
			{
				b.push(s[i]);
			}
			if(s[i]==')')
			{
				a.push(b.top());
				//cout<<"a.top   "<<a.top()<<endl;
				b.pop();
			}
		}
		int i;
		for( i=l-1; !a.empty(); i--)
		{
			s[i]=a.top();
			a.pop();
		}
		//cout<<"i  "<<i<<endl;
		for(int j=i+1; j<l; j++)
		{
			cout<<s[j];
		}
		cout<<endl;
	}
	return 0;
}
