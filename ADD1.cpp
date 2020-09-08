#include<bits/stdc++.h>
#define ll long long int
#define MOD 99991

using namespace std;

ll add1(int a[], ll n,  ll size)
{
	for(ll i=n-1; i>=0; i++)
	{
		if(a[i]==0)
		{
			a[i]=1;
			size+=1;
			break;
		}
		else
		{
			a[i]=0;
			size--;
			i--;
			if(a[i]==0)
				a[i]=1, size++;
			else
			{
				while(a[i]==1 and i>=0)
				{
					a[i]=0;
					i--;
					size--;
				}
				if(i>=0)
				
				{
					a[i]=1;
					size++;
				}
			}
			break;	
		}
	}
	return size;
}

int main()
{
	int a[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int size=17;
	size=add1(a,17,size);
	cout<<size<<endl;
	for(int i=0;i<17; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
