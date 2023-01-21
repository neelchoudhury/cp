#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int t;
	char a[100001];
	cin>>t;
	int cnt=0;
	while(t--)
	{
		cin.ignore(100002,'\n');
		cin.getline(a,100000);
		int l=strlen(a);
		cout<<l<<" len"<<endl;
		int b=0;
		int e=0;
		cnt=0;
		for(int i=0;i<l; i++)
		{
			if(a[i]=='0')
			{
				b=i;
				break;
			}
		}
		for(int i=l-1; i>=0; i--)
		{
			if(a[i]=='0')
			{
				e=i;
				break;
			}
		}
		//cout<<b<<" "<<e<<endl;
		
		for(int i=0; i<l; i++)
		{
			//cout<<"Entering "<<i<<endl;
			if(i<b or i>e)
			{
				//cout<<"ENtering first cond"<<endl;
				if(a[i]=='1')
					cnt++;
				//cout<<"COndition "<<(a[i]=='1')<<endl;
				//cout<<i<<"  i";
			}
			else if(i>=b and i<=e)
			{
				if(a[i]=='0')
					cnt++;
				//cout<<i<<" ";
			}
		}
		//cout<<endl;
		cout<<cnt<<endl;
	}
	return 0;
}
