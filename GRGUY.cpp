#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	char l1[200010],l2[200010];
	scanf("%lld", &t);
	ll cnt1,cnt2,ans;
	while(t--)
	{
		cnt1=0,cnt2=0,ans=0;
		scanf("%s",l1);
		scanf("%s", l2);
		ll len=strlen(l1);
		int flag=0;
		for(int i=0; i<len; i++)
		{
			if(flag==0 and l1[i]=='#' )
			{
				if(l2[i]=='#')
					ans=-1;
				else
					if(i!=0)cnt1++;
				flag=1;
			}
			else if(flag==1 and l2[i]=='#')
			{
				if(l1[i]=='#')
					ans=-1;
				else
					if(i!=0)cnt1++;
				flag=0;
			}
			//cout<<" i "<<i<<" cnt "<<cnt1<<" flag "<<flag<<endl;
		}
		flag=0;
		for(int i=0; i<len; i++)
		{
			if(flag==0 and l2[i]=='#' )
			{
				if(l1[i]=='#')
					ans=-1;
				else
					if(i!=0)cnt2++;
				flag=1;
			}
			else if(flag==1 and l1[i]=='#')
			{
				if(l2[i]=='#')
					ans=-1;
				else
					if(i!=0)cnt2++;
				flag=0;
			}
			//cout<<" i "<<i<<" cnt "<<cnt1<<" flag "<<flag<<endl;
		}
		for(int i=0; i<len; i++)
		{
			if(l1[i]=='#' and l2[i]=='#')
			{
				ans=-1;
				break;
			}
		}
		//cout<<"cnt1 "<<cnt1<<" cnt2 "<<cnt2<<endl;
		if(ans==-1)
			cout<<"No"<<endl;
		else
		{
			ans=min(cnt1,cnt2);
			cout<<"Yes"<<endl<<ans<<endl;
		}
		
	}
	return 0;
}
