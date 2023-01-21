#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll x=1,y=1,z=0;
	for(int i=0; i<100; i++)
	{
		z=x+y;
		x=y;
		y=z;
		cout<<z%4<<" ";
	}
	return 0;
}
