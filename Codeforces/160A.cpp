#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[105];
	int s=0;
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	int k=(s+1)/2, cnt=0;
	sort(a,a+n);
	for(int i=n-1;  ;i--)
	{
		s-=a[i];
		cnt++;
		if(s<k)
			break;	
		
	}
	cout<<cnt<<endl;
	return 0;
}
