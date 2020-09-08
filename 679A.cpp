#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll a[7];
	for(int i=0;i<5; i++)
	{
		//scanf("%I64d",&a[i]);
		cin>>a[i];
	}
	sort(a,a+5);
	ll cnt[7];
	memset(cnt,0,sizeof(cnt));
	cnt[0]=1;
	ll j=0;
	for(int i=1; i<5; i++)
	{
		if(a[i]==a[i-1])
			cnt[j]++;
		else
		{
			j++;
			cnt[j]=1;
		}
	}
	sort(cnt,cnt+5);
	reverse(cnt,cnt+5);
	//reverse(a,a+5);
	ll ans=0;
	ll f=0;
	for(int i=1; i<5; i++)
	{
		if(a[i]==a[i-1])
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		int cnt1=0,cnt2=0,val=0,sum=0;
		for(int i=1; i<5; i++)
		{
			sum+=a[i];
			if(a[i]==a[i-1])
			{
				cnt1++;
				val=a[i];
			}
			if(cnt1==3)
			{
				break;
			}
		}
		if(cnt1==3)
		{
			ans=sum-3*val;
		}
		else if(cnt1==2)
		{
			ans=sum-2*val;
		}
	}
	else
	{
		for(int i=0; i<5; i++)
			ans+=a[i];
	}
	//printf("%I64d\n",ans);
	//fflush(stdout);
	cout<<ans<<endl;
	return 0;
}
