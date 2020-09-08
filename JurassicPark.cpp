#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	int nc,ng,np, pm, pg,p,r,pcr;
	int n;
	cin>>n;
	ll k;
	cin>>nc>>pm>>pg>>p>>r>>k;
	ng=nc;
	np=nc-ng;
	pcr=0;
	while(n--)
	{
		for(ll i=r; i<=k;++i)
	{
		/*if(i==r)
		{
			np+=pg;
			ng-=np;
		}*/
		if(i%p==0)
		{
			
			ng+=np;	
			
		}	
		if(i%r==0)
		{
			pm-=1;
			pg+=1;
			if(ng>0)
			{
				if(ng>=pg)
				{
					ng-=pg;
					pg=0;
					pcr+=pg;
				}
				if(ng<pg)
				{
					ng=0;
					pg-=ng;
					pcr+=ng;
				}
			}
			
		}
	}
	cout<<ng<<" "<<pcr<<" "<<pm<<" "<<pg<<endl;
	}

	return 0;
	
}
