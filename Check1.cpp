#include<iostream>
#include<algorithm>
#define ll long long int

struct pair{
	int f;
	int s;
};

using namespace std;

int main()
{
	ll t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		
		int flag=0;
		pair num[m];
		for(int i=0; i<m;i++)
		{
			cin>>num[i].f>>num[i].s;
			if(i>0 and num[i-1].s==num[i].f)
			flag=1;
		}
		if(n<=2)
		{
			cout<<"YES"<<endl;
		}
		else if(n>2)
		{
			if(m<2)
			{
				cout<<"YES"<<endl;
			}
			else if(m==2 and flag==1)
			{
				cout<<"YES"<<endl;
			}
			else
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
