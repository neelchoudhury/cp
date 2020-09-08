#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	char a[105];
	scanf("%lld", &t);
	while(t--)
	{
		int f=0;
		scanf("%s",a);
		for(int i=2; i<strlen(a); i+=2)
		{
			if(a[i]!=a[i-2])
			{
				//cout<<"NO"<<endl; 
				f=1;
				break;
			}
		}
		for(int i=3; i<strlen(a); i+=2)
		{
			if(a[i]!=a[i-2])
			{
				//cout<<"NO"<<endl;
				f=1;
				break;
			}
		}
		if(a[0]==a[1])
			 f=1;
		if(f)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
