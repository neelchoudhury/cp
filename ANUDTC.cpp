#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	vector<int> v;
	int s=1;
	for(int i=2; s<=360; i++)
	{
		v.push_back(s);
		s=(i*(i+1))/2;
	}
	while(t--)
	{
		scanf("%lld", &n);
		if(360%n==0)
			cout<<"y ";
		else
			cout<<"n ";
		if(n<=360)
			cout<<"y ";
		else
			cout<<"n ";
		int f=360/n;
		int l=(n*(n+1))/2;
		if(l<=360)
			cout<<"y"<<endl;
		else
			cout<<"n"<<endl;
	}
	return 0;
}
