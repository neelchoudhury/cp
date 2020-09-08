#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		sort(a,a+n);
		int c=0;
		int s;
		for(int i=1; i<n; i++)
		{
			if(a[i]==a[i-1])
			{
				c++;
				s=a[i];
				i++;
				while(a[i]==s)
					i++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
