#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	char a[205];
	char b[105];
	char c[105];
	cin>>n;
	scanf("%s", a);
	for(int i=0; i<n; i++)
	{
		b[i]=a[i];
		c[i]=a[i+n];
	}
	sort(b,b+n);
	sort(c,c+n);
	//cout<<b<<" "<<c<<endl;
	int f1=0,f2=0;
	for(int i=n-1; i>=0;i--)
	{
		if(b[i]>=c[i])
		{
			f1=1;
			break;
		}		
	}
	for(int i=n-1; i>=0;i--)
	{
		if(b[i]<=c[i])
		{
			f2=1;
			break;
		}		
	}
	if(f1^f2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
