#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin>>t;
	char m[50001],w[50001];
	while(t--)
	{
		
		cin>>m;
		cin>>w;
		//cout<<m<<endl<<w<<endl;
		int l1=strlen(m);
		int l2=strlen(w);
		sort(m,m+l1);
		sort(w,w+l2);
		if(l1!=l2)
		{
			cout<<"NO"<<endl;
			
		}
		
		else
		{
			int flag=0;
			for(int i=0; i<l1; i++)
			{
				if(m[i]!=w[i])
				{
					cout<<"NO"<<endl;
					flag=1;
					break;
				}
				
			}
			if(!flag)
			cout<<"YES"<<endl;
		}
		
	}
	return 0;
}
