#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	cin>>t;
	int type;
	ll cnt1=0,cnt2=0;
	char s[100001];
	ll cb=0,cg=0;
	while(t--)
	{
		cin>>type;
		scanf("%s", s);
		cb=0,cg=0;
		ll n=strlen(s);
		for(ll i=0;i<n; i++)
		{
			if(s[i]=='B')
				cb++;
			else
				cg++;
		}
		ll x=0;
		char z,y;
		ll cnt=0;
		if(abs(cb-cg)>1)
		{
			cnt=-1;
		}
		else
		{
			if(cb>cg)
			{
				for(ll i=0; i<n;i+=2)
				{
					if(s[i]!='B')
						cnt++;
				}
			}
			else if(cb<cg)
			{
				for(ll i=0; i<n;i+=2)
				{
					if(s[i]!='G')
						cnt++;
				}
			}
			else if(cg==cb)
			{
				x=0;
				cnt=0;
				for(ll i=0; i<n;i+=2)
				{
					if(s[i]!=s[0])
						cnt++;
				}
				for(ll i=0; i<n;i+=2)
				{
					if(s[i]==s[0])
						x++;
				}
				//cout<<" "<<x<<" "<<cnt<<endl;
				if(x<cnt)
					cnt=x;
				z=s[0];
				if(z=='G')
					y='B';
				else
					y='G';
			}
		}
		 
		ll b[n];
		ll b1[n];
		ll b2[n];
			
		if(cb>cg)
		{
			for(ll i=0; i<n; i++)
			{
				if(i%2==0)
				{
					if(s[i]=='B')
						b[i]=0;
					else
						b[i]=-1;
				}
				else if(i%2!=0)
				{
					if(s[i]=='G')
						b[i]=0;
					else
						b[i]=1;
				}
			}
			//cout<<"leaving cb>cg"<<endl;
		}
		else if(cb<cg)
		{
			for(ll i=0; i<n; i++)
			{
				if(i%2==0)
				{
					if(s[i]=='G')
						b[i]=0;
					else
						b[i]=1;
				}
				else if(i%2!=0)
				{
					if(s[i]=='B')
						b[i]=0;
					else
						b[i]=-1;
				}
			}
		}
		else
		{
			//x+=1;
			if(x<cnt)
			{
				for(ll i=0; i<n; i++)
				{
					if(i%2==0)
					{
						if(s[i]==y)
							b[i]=0;
						else if(s[i]>y)
							b[i]=-1;
						else if(s[i]<y)
							b[i]=1;
					}
					else if(i%2!=0)
					{
						if(s[i]==z)
							b[i]=0;
						else if(s[i]>z)
							b[i]=-1;
						else if(s[i]<z)
							b[i]=1;
					}
				}
			}
			else if(x>cnt)
			{
				for(ll i=0; i<n; i++)
				{
					if(i%2==0)
					{
						if(s[i]==z)
							b[i]=0;
						else if(s[i]>z)
							b[i]=-1;
						else if(s[i]<z)
							b[i]=1;
					}
					else if(i%2!=0)
					{
						if(s[i]==y)
							b[i]=0;
						else if(s[i]>y)
							b[i]=-1;
						else if(s[i]<y)
							b[i]=1;
					}
				}	
				//cout<<"ENtered x>cnt"<<endl;
			}
			else if(x==cnt)
			{
				ll cnt11=0;
				ll cnt12=0;
				for(ll i=0; i<n; i++)
				{
					if(i%2==0)
					{
						if(s[i]==z)
							b1[i]=0;
						else if(s[i]>z)
							b1[i]=-1;
						else if(s[i]<z)
							b1[i]=1;
					}
					else if(i%2!=0)
					{
						if(s[i]==y)
							b1[i]=0;
						else if(s[i]>y)
							b1[i]=-1;
						else if(s[i]<y)
							b1[i]=1;
					}
				}
				ll ab[cnt];
				ll ag[cnt];
				ll j=0,k=0;
				for(ll i=0; i<n;i++)
				{
					if(b1[i]==1)
					{
						ab[j]=i;
						j++;
					}
					else if (b1[i]==-1)
					{
						ag[k]=i;
						k++;
					}
				}
				for(ll i=0; i<cnt; i++)
				{
					cnt11+=(abs(ab[i]-ag[i]));
				}
				for(ll i=0; i<n; i++)
				{
					if(i%2==0)
					{
						if(s[i]==y)
							b2[i]=0;
						else if(s[i]>y)
							b2[i]=-1;
						else if(s[i]<y)
							b2[i]=1;
					}
					else if(i%2!=0)
					{
						if(s[i]==z)
							b2[i]=0;
						else if(s[i]>z)
							b2[i]=-1;
						else if(s[i]<z)
							b2[i]=1;
					}
				}
				j=0,k=0;
				for(ll i=0; i<n;i++)
				{
					if(b2[i]==1)
					{
						ab[j]=i;
						j++;
					}
					else if (b2[i]==-1)
					{
						ag[k]=i;
						k++;
					}
				}
				for(ll i=0; i<cnt; i++)
				{
					cnt12+=(abs(ab[i]-ag[i]));
				}	
				cnt1=min(cnt11,cnt12);
			}
		}		
		if(type==0)
			printf("%lld\n", cnt);
			
		else if(cnt<=0)
		{
			if(type==1 or type ==2)
				printf("%lld\n", cnt);
		}
		else if(cnt>0)
		{
		
			ll ab[cnt];
			ll ag[cnt];
			ll j=0,k=0;
			for(ll i=0; i<n;i++)
			{
				if(b[i]==1)
				{
					ab[j]=i;
					j++;
				}
				else if (b[i]==-1)
				{
					ag[k]=i;
					k++;
				}
			}
		    if(type==1)
			{
				
				if(cb==cg and x==cnt)
					printf("%lld\n", cnt1);	 
					
				else
				{
					cnt1=0;
					for(ll i=0; i<cnt; i++)
					{
						cnt1+=(abs(ab[i]-ag[i]));
						//cout<<"     "<<cnt1<<" "<<cnt<<endl;
					}
					printf("%lld\n", cnt1);
				}
			}
			else if(type==2)
			{
				//ll cnt2=0;
				for(ll i=0; i<cnt; i++)
				{
					cnt2+=(pow(abs(ab[i]-ag[i]),2));
				}
				printf("%lld\n", cnt2);
			}
		}
	}
	return 0;
}
