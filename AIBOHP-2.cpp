#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	char a[6105];
	int b[128];
	while(t--)
	{
		memset(b,0,sizeof(b));
		scanf("%s", a);
		int l=strlen(a);
	 	int cnt=0,ans=1;
	 	for(int i=0; i<l ;i++)
	 	{
	 		cnt=0;
	 		if(i<l-1 and a[i]==a[i+1])
	 		{
	 			cnt=0;
	 			int j1=i,j2=i+1;
	 			while( (j1>=0 and j2<l))
	 			{
	 				if(a[j1]==a[j2])
						cnt+=2;
					j1--,j2++;
	 			}
	 			ans=max(cnt,ans);
	 		}
	 		else if( (i>0 and i<l-1 ) and a[i-1]==a[i+1])
	 		{
	 			cnt=1;
	 			int j1=i-1,j2=i+1;
	 			while( (j1>=0 and j2<l))
	 			{
	 				if(a[j1]==a[j2])
	 					cnt+=2;
					j1--,j2++;
	 			}
	 			ans=max(cnt,ans);
	 		}
	 	}
	 	ans=l-ans;
	 	cout<<ans<<endl;
	}
	return 0;
}
