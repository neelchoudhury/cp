#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,min1,max1,min2,max2,min3,max3;
	cin>>n>>min1>>max1>>min2>>max2>>min3>>max3;
	ll d1=0,d2=0,d3=0;
	d1=min1;
	n-=min1;
	d2=min2,d3=min3;
	n-=(min2+min3);
	if(n>0)
	{
		if(n>(max1-min1))
		{
			d1=max1;
			n-=(max1-min1);
			if(n>(max2-min2))
			{
				d2=max2;
				n-=(max2-min2);
				if(n>(max3-min3))
				{
					d3=max3;
					n-=(max3-min3);
				}
				else
				{
					d3+=n;
				}
			}
			else
			{
				d2+=n;
			}
		}
		else
		{
			d1+=n;
			n=0;
		}
	}
	cout<<d1<<" "<<d2<<" "<<d3<<endl;
	return 0;
}
