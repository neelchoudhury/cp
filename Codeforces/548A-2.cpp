#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
	string s;
	cin>>s;
	int k;
	cin>>k;
	int n=s.length();
	if(n%k!=0)
	cout<<"NO"<<endl;
	else
	{
		//cout<<" das "<<n<<endl;
	int m=0;
	int len=n/k;
	int flag=0;
	for(int i=0;i<k;++i)
	{
		flag=0;
		char temp[len+1];
		for(int j=0;j<len;j++)
		{
			temp[j]=s[m];
			m++;
		}
		for(int j=0;j<len/2;++j)
		{
			if(temp[j]!=temp[len-j-1])
			{
				//cout<<j<<endl;
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	if(flag==1)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
}
	return 0;
}
