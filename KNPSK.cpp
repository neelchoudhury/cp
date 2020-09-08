#include<bits/stdc++.h>
#define ll long long int
#define N 100010

using namespace std;

ll a[N],b[N],sum[2*N];

int main()
{
	ll n,w,c,j=0,k=0,ssum=0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(sum,0,sizeof(sum));
	scanf("%lld", &n);
	for(ll i=0; i<n; i++)
	{
		scanf("%lld %lld", &w, &c);
		if(w==1)
			a[j++]=c;
		else
			b[k++]=c;
		ssum+=c;
	}
	sort(a,a+j);
	sort(b,b+k);
	sum[1]=a[j-1];
	ll cnta=2,cntb=1,x,y;
	for(int i=0; i<j; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0; i<k; i++)
		cout<<b[i]<<" ";
	cout<<endl;
	for(ll i=2; i<=ssum; i++)
	{
		if(i%2==0)
		{
			x=sum[i-2]+(cnta<=j?a[j-(cnta)]:0)+((cnta+1)<=j?a[j-(cnta+1)]:0);
			y=sum[i-2]+(cntb<=k?b[k-cntb]:0);
			if(x>y)
			{
				sum[i]=x;
				cnta+=2;
			}
			else if(x<y)
			{
				sum[i]=y;
				cntb+=1;
			}
			else if(x==y)
			{
				sum[i]=y;
				cntb+=1;
			}		
		}
		else if(i%2==1)
		{
			/*x=sum[i-1]+(cnta-1<=j?a[j-cnta+1]:0)+(cnta-2<=j?a[j-cnta+2]:0);
			y=sum[i-1]+(cntb<=k?b[k-cntb]:0);
			if(x>y)
			{
				sum[i]=x;
			}
			else if(x<y)
			{
				sum[i]=y;
				cntb++;
			}
			else 
			{
				sum[i]=y;
				cntb++;
				//cnta--;
			}*/
			sum[i]=sum[i-1]+(cnta<=j?a[j-cnta]:0);
			cnta++;
			//cnta+=1;
		}
		cout<<"i "<<i<<" x "<<x<<" y "<<y<<endl;
		cout<<"cnta "<<cnta<<" cntb "<<cntb<<endl;
	}
	for(ll i=ssum; i>0; i--)
		printf("%lld ", sum[i]);
	cout<<endl;
	return 0;
}
