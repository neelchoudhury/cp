#include<bits/stdc++.h>
#define lllong long int

using namespace std;

bool is_Lucky(int ans)
{
	int x; 
	while(ans>0)
	{
		x=ans%10;
		if(x!=4 and x!=7)
		{
			return false;
		}
		ans/=10;
	}
	return true;
}

int main()
{
	int n;
	int flag=0;
	//cout<<"luch "<<is_Lucky(47)<<endl;
	cin>>n;
	for(int i=2; i<=(n); i++)
	{
		if(n%i==0)
		{
			if(is_Lucky(i)  )
			{
				//cout<<n/i<<" done"<<endl;
				flag=1;
				break;
			}
		}
	}
	//cout<<"flag "<<flag<<endl;
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
