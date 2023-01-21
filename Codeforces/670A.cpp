#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	cin>>n;
	int mini=(n/7)*2,maxi=0;
	if(mini==0)
	{
		 
	}
	if(n%7==0)
		maxi=(n/7)*2;
	else if(n%7==1)
		maxi=(n/7)*2+1;
	else if(n%7==6)
	{
		maxi=(n/7)*2+2;
		mini+=1;
	}
	else
		maxi=(n/7)*2+2;
	cout<<mini<<" "<<maxi<<endl;
	return 0;
	
}
