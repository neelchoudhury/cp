#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int sum=0;
	cin>>n;
	int x1,y1,x2,y2;
	while(n--)
	{
		cin>>x1>>y1>>x2>>y2;
		sum+=((abs(x1-x2)+1)*(abs(y1-y2)+1));
	}
	cout<<sum<<endl;
}
