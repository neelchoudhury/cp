#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[100005];
	char b[100005];
	int n=0;
	scanf("%s", a);
	scanf("%s", b);
	n=strlen(a);
	int cnt=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]!=b[i])
			cnt++;
	}
	if(cnt%2)
		cout<<"impossible"<<endl;
	else
	{
		int f=0;
		for(int i=0; i<n;i++)
		{
			if(a[i]==b[i])
				cout<<a[i];
			else
				if(f)
				{
					cout<<a[i];
					f=0;
				}
				else
				{
					cout<<b[i];	
					f=1;
				}
		}
		cout<<endl;
	}
	return 0;
}
