#include<iostream>

using namespace std;

int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		char a[n+1];
		cin>>a;
		int cnt=0;
		int f=1;
		//int i=0;
		//for(;a[i]!='.';i++)
		for(int j=0; j<n; j++)
		{
			if(a[j]=='#')
			{
				cnt++;
				if(cnt>=k)
				{
					cout<<"NO"<<endl;
					f=0;
					break;
				}
			}
			if(a[j]=='.')
			{
				cnt=0;
			}
			//cout<<j<<" "<<cnt<<endl;
		}
		if(f)
			cout<<"YES"<<endl;
	}
	return 0;
}
