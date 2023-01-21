#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	int q;
	cin>>q;
	while(q--)
	{
		int count=0;
		int sum=0;
		int l,r;
		char x,y;
		cin>>x>>y>>l>>r;
		for(int i=l-1;i<r;++i)
		{
			if(a[i]==x)
			count++;
			else if(a[i]==y)
			sum+=count;
		}
		cout<<sum<<endl;
	}
	return 0;
	
}
