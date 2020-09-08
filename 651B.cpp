#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1010];

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	int ans=0,f=0,j=0,cnt=1;
	for(int i=1; i<n; i++)
	{
		if(a[i]==a[i-1])
		{
			if(f==0)
			{
				f=1;
				j=i-1;
			}
			cnt++;
		}
		if(a[i]!=a[i-1] or i==n-1)
		{
			if(f==1)
			{
				//cout<<cnt<<" "<<j<<endl;
				ans++;
				f=0;
				ans+=(min(cnt,j));
				if(ans>0)
					ans-=1;
				cnt=1;
				j=0;
				
			}
			else if(f==0)
					ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
