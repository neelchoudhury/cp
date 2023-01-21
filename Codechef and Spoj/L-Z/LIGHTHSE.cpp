#include<bits/stdc++.h>
#define ll long long int
#define N 100010

using namespace std;

ll a[N][2];

int main()
{
	ll t,n;
	ll bm[2]={0,0},tm[2]={0,0},rm[2]={0,0},lm[2]={0,0};
	scanf("%lld", &t);
	while(t--)
	{
		for(int i=0;i<2; i++)
		{
			bm[i]=0,tm[i]=0; lm[i]=0, rm[i]=0;
		}
		scanf("%lld", &n);
		for(ll i=0; i<n; i++)
			scanf("%lld %lld", &a[i][0], &a[i][1]);
		tm[0]=bm[0]=a[0][1];
		tm[1]=bm[1]=0;
		lm[0]=rm[0]=a[0][0];
		lm[1]=rm[1]=0;
		for(ll i=0; i<n; i++)
		{
			if(a[i][0]>=rm[0])
			{
				 rm[0]=a[i][0],rm[1]=i;				
			}
			else if(a[i][0]<=lm[0])
			{
				lm[0]=a[i][0],lm[1]=i;
			}	
			if(a[i][1]>=tm[0])
			{
				tm[0]=a[i][1],tm[1]=i; 
			}
			else if(a[i][1]<=bm[0])
			{
				bm[0]=a[i][1],bm[1]=i;
			}
		}
		
		/*for(int i=0;i<1; i++)
		{
			cout<<tm[0]<<" "<<tm[1]<<"           "<<rm[0]<<" "<<rm[1]<<endl;
			cout<<lm[0]<<" "<<lm[1]<<"           "<<bm[0]<<" "<<bm[1]<<endl;
		}*/
		
		
		for(ll i=0; i<n; i++)
		{
			if(a[i][0]==rm[0])
			{
				if(a[i][1]==tm[0] or a[i][1]==bm[0])
					rm[1]=i; 
			}
			if(a[i][0]==lm[0])
			{
				if(a[i][1]==tm[0] or a[i][1]==bm[0])
					lm[1]=i;
			}
			if(a[i][1]==tm[0])
			{
				if(a[i][0]==rm[0] or a[i][0]==lm[0])
					tm[1]=i;
			}
			if(a[i][1]==bm[0])
			{
				if(a[i][0]==rm[0] or a[i][0]==lm[0])
					bm[1]=i;
			}
		}
	 
	/* for(int i=0;i<1; i++)
		{
			cout<<tm[0]<<" "<<tm[1]<<"           "<<rm[0]<<" "<<rm[1]<<endl;
			cout<<lm[0]<<" "<<lm[1]<<"           "<<bm[0]<<" "<<bm[1]<<endl;
		}*/
		
		if(tm[1]==rm[1])
		{
			cout<<1<<endl;
			cout<<(rm[1]+1)<<" SW"<<endl;
		}
		else if(tm[1]==lm[1])
		{
			cout<<1<<endl;
			cout<<(lm[1]+1)<<" SE"<<endl;
		}
		else if(bm[1]==lm[1])
		{
			cout<<1<<endl;
			cout<<(bm[1]+1)<<" NE"<<endl;
		}
		else if(bm[1]==rm[1])
		{
			cout<<1<<endl;
			cout<<(rm[1]+1)<<" NW"<<endl;
		}
		else
		{
			if(a[lm[1]][1]>a[rm[1]][1])
			{
				cout<<2<<endl;
				cout<<(lm[1]+1)<<" SE"<<endl;
				cout<<(rm[1]+1)<<" NW"<<endl;
			}
			else
			{
				cout<<2<<endl;
				cout<<(lm[1]+1)<<" NE"<<endl;
				cout<<(rm[1]+1)<<" SW"<<endl;
			}
		}
	}
	return 0;
}
