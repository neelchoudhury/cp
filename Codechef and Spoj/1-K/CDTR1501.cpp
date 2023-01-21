#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n==0)
		cout<<1<<endl;
	else 
		cout<<pow(2,n)<<endl;
	return 0;
}

//Doesnt account for range in actual question. Do in Python
