#include<bits/stdc++.h>

using namespace std;

int a[104];

int main()
{
	int n;
	cin>>n;
	int pos1=0,pos2=0;
	for(int i=0;i <n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
			pos1=i+1;
		if(a[i]==n)
			pos2=i+1;
	}
	int ans=0;
	if(n%2==1)
		ans=(n)/2+max(abs((n+1)/2-pos1),abs((n+1)/2-pos2));
	else
	{
		ans=n/2;
		if(abs(n/2-pos1)+1>abs(n/2-pos2) and pos1<=n/2)
			ans+=1;
		if(abs(n/2-pos2)+1>abs(n/2-pos1) and pos2<=n/2)
			ans+=1;
		ans+=max(abs((n)/2-pos1),abs((n)/2-pos2))-1;
	}
	cout<<ans<<endl;
	return 0;
	
}
