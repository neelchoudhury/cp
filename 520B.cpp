#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int s=0,cnt=0;
	if(m<n)
	{
		cnt=n-m;
	}
	else if(m>n)
	{
		while(n<m)
		{
			s++;
			n*=2;
		}
		s--;
		n/=2;
		cnt=s;
		//cout<<n<<" "<<cnt<<" ";
		int x=(2*n-m);
		//cout<<x<<endl;
		if(x%2==0)
		{
			cnt+=(x/2+1);
		} 
		else
		{
			cnt+=(x/2+2);
		}
	}
	cout<<cnt<<endl;
	return 0;
	
}
