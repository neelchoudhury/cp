#include<bits/stdc++.h>

using namespace std;

int main()
{
	int m,sum;
	int lar[110],sma[110];
	memset(lar,0,sizeof(lar));
	memset(sma,0,sizeof(sma));
	cin>>m>>sum;
	int i=m,j=sum;
	int k=0;
	if(sum==0 or sum>9*m)
	{
		if(sum==0 and m==1)
			cout<<"0 0"<<endl;
		else
			cout<<"-1 -1"<<endl;
	}
	else
	{
		
		while(i--)
		{
			
			if(sum>9)
			{
				lar[k++]=9;
				sum-=9;
			}
			else
			{
				lar[k++]=sum;
				sum=0;
			}
		}
		//cout<<k<<" k"<<endl;
		if(lar[k-1]==0)
		{
			sma[k-1]=1;
		
			int flag=0;
			for(int i=k-2; i>=0; i--)
			{
				while(lar[i]==0)
				{
					sma[i]=0;
					i--;
				}
				if(!flag)
				{
					sma[i]=lar[i]-1;			
					flag=1;
				}
				else
					sma[i]=lar[i];
			}
		}
		else
		{
			sma[k-1]=lar[k-1];
			for(int i=k-2; i>=0; i--)
				sma[i]=lar[i];
		}	
	}
	for(int i=k-1;i>=0; i--)
		cout<<sma[i];
	cout<<" ";
	for(int i=0; i<k; i++)
		cout<<lar[i];
	cout<<endl;
	return 0;
	
}
