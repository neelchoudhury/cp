#include<iostream>
#include<cstdio>
#include<cctype>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		//scanf("%s",s);
		char s[10001];
		cin.ignore();
		cin.getline(s,100);
		//cin>>s;
		for(int i=0; s[i]!='\0'; i++)
		{
			if(isupper(s[i]))
				s[i]=tolower(s[i]);
		}
		//printf("%s\n",s);
		//cout<<s<<endl;
		//cout<<"DOne lowering"<<endl;
		int l=strlen(s);
		char ch;
		cout<<l;
		sort(s,s+l);
		cout<<s<<endl;
		int cf=0;
		int pf=0;
		char cc;
		for(int i=1; i<l; i++)
		{
			//cout<<"fhffht"<<endl;
			if( (int)s[i]>=97 and s[i]<=122 )
			{
				//cout<<"Ebtered for"<<endl;
				if(s[i]==s[i-1])
				{
					//cout<<" entered first if"<<endl;
					cf+=1;
					ch=s[i];
				}
				else
				{
					if(pf<cf) 
					{
						//cout<<"Enered sen if ch:"<<ch<<endl;
						pf=cf;
						cc=ch;
						//cf=0;
					}
					cf=0;
				}
			}
		}
		cout<<cc<<endl;
		
	}
	return 0;
	
}
