#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		ll a[n];
		bool b[n];
		for(int i=0; i<n; i++)
			scanf("%lld", &a[i]);
		sort(a,a+n);
		b[0]=0;
		for(int i=1; i<n; i++)
		{
			if(a[i]-a[i-1]==1)
				b[i]=1;
			else
				b[i]=0;
		}
		/*	for(int i=0; i<n; i++)
		{
		cout<<b[i]<<" ";
		 
		}
		cout<<endl;*/
		int min=0,max=0, cnt=0;
		for(int i=0;i<n; i++ )
		{
			if(b[i]==1)
			{
				//cout<<"sat1"<<endl;
				cnt+=1;
			}
			if(b[i]!=1 or i==n-1)
			{
			//	cout<<"sat2"<<endl;
				if(cnt==1)
					min+=1;
				else
				
					min+=(cnt/2);
				//max+=(cnt+1)/2;
				cnt=0;
			}
			if(b[i]==0 and i!=n-1 and b[i+1]!=1)
			{
				min=min+1;
		
			//	cout<<"sat3"<<endl;
				//max++;
			}
				if(b[i]==0 and i==n-1)
				min++;
			//cout<<min<<" "<<cnt<<endl;
		}
		max=0;
		for(int i=0;i<n; i++ )
		{
			if(b[i]==1)
				cnt++;
			if((cnt>0 and b[i]!=1) or i==n-1)
			{
				//cout<<"sat2"<<endl; 
				max+=(cnt+2)/2;
				cnt=0;
			}
			if(b[i]==0 and i!=n-1 and b[i+1]!=1)
			{
				//cout<<"sat3"<<endl; 
				max++;
			}
			//	if(b[i]==0 and i==n-1)
			//	min++;
		//	cout<<max<<" "<<cnt<<" "<<i<<endl;
		}
		printf("%d %d\n", min,max);
		
		
	}
	return 0;
}
