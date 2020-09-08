#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a1,a2,a3,a4,a5,a6;
	
	
	cin>>a1>>a2>>a3>>a4>>a5>>a6;
	
	
	int t=0,s=0;
	t=2*a1+1;
	s+=t;
	//cout<<s<<endl;
	for(int i=1; i<=a2-1; i++)
	{
		t=t+2;
		s+=t;
	}
	
	//t-=2;
	//cout<<s<<endl;
	while(t>=(2*a4+1))
	{
		
		s+=t;
		t-=2;
	}
	//s+=t;
	cout<<s<<endl;
	return 0;
}
