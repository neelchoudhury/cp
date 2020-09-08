#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n,cnt=0,x;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		if(x==1)
			cnt+=1;
	}
	if(n>1 and cnt==n-1)
		cout<<"YES"<<endl;
	else if(n==1 and cnt==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
