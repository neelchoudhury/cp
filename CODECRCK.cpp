#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define RTWO 1.4142135623730950488016887
#define RTHREE 1.7320508075688772935274463

using namespace std;

int main()
{
	ll i,k,s,ai,bi;
	scanf("%lld %lld %lld", &i, &k, &s);
	scanf("%lld %lld", &ai, &bi);
	ld alph=0.0, beta=0.0, gamm=0.0;
	alph=( RTWO*(1-RTHREE)*ai + RTWO*(1+RTHREE)*bi );
	beta=( RTWO*(1+RTHREE)*ai - RTWO*(1-RTHREE)*bi );
	gamm=16;
	
	ld ak=0.0, bk=0.0;
	
	if(k>=i and (k-i)%2==1)
	{
		ll var=(k-i)/2;
		if(abs(s)>=var)
		{
			ld qq=gamm*pow(2.0,(-s)/abs(s));
			ak=(ld)pow(qq,var);
			ak=ak*alph;
			ak=ak*(pow((pow(2.0,(-s)/abs(s))),abs(s)-var));
			
			bk=(ld)pow(qq,var);
			bk=bk*beta;
			bk=bk*(pow((pow(2.0,(-s)/abs(s))),abs(s)-var));
		}
		if(abs(s)<var )
		{
			ld qq=gamm*pow(2.0,(-s)/abs(s));
			ak=(ld)pow((qq),s);
			ak=ak*alph;
			ak=ak*(pow(gamm,var-abs(s)));
			
			bk=(ld)pow(qq,s);
			bk=bk*beta;
			bk=bk*(pow(gamm,var-abs(s)));
		}
	}
	if(k>=i and (k-i)%2==0)
	{
		ll var=(k-i)/2;
		if(abs(s)>=var)
		{
			ld qq=gamm*pow(2.0,(-s)/abs(s));
			ak=(ld)pow(qq,var);
			ak=ak*ai;
			ak=ak*(pow((pow(2.0,(-s)/abs(s))),abs(s)-var));
			
			bk=(ld)pow(qq,var);
			bk=bk*bi;
			bk=bk*(pow((pow(2.0,(-s)/abs(s))),abs(s)-var));
		}
		if(abs(s)<var )
		{
			ld qq=gamm*pow(2.0,(-s)/abs(s));
			ak=(ld)pow(qq,s);
			ak=ak*ai;
			ak=ak*(pow(gamm,var-abs(s)));
			
			bk=(ld)pow(qq,s);
			bk=bk*bi;
			bk=bk*(pow(gamm,var-abs(s)));
		}
	}
	
	ld Z=0.0,X=0.0;
	
	if(k<i and (i-k)%2==1)
	{
		ll var=(i-k);
		Z=(ld)pow((2*(1+RTHREE*RTHREE)),(ll)var/2);
		//cout<<" Z "<<Z<<endl;
		if(abs(s)>=var)
		{                      //pow(2,(-s)/abs(s))
			ak=Z;
			//cout<<"ak "<<ak<<endl;
			ak*=( (1-RTHREE)*ai + (1+RTHREE)*bi );
			//cout<<"ak "<<ak<<endl;
			ak*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE))*pow(2.0,(s)/abs(s)),-(i-k)));
			//cout<<"ak "<<ak<<endl;
			ak*=(ld)pow( pow(2.0,(-s)/abs(s)),var-abs(s));
			//ak+=(ld)pow(2*(1+RTHREE*RTHREE), var/2);
			//cout<<"ak "<<ak<<endl;
			
			bk=Z;
			//cout<<"bk "<<bk<<endl;
			bk*=( (1+RTHREE)*ai - (1-RTHREE)*bi );
			//cout<<"bk "<<bk<<endl;
			bk*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE))*pow(2.0,(s)/abs(s)),-(i-k)));
			//cout<<"bk "<<bk<<endl;
			bk*=(ld)pow(pow(2.0,(-s)/abs(s)),var-abs(s));
			//bk+=(ld)pow(2*(1+RTHREE*RTHREE), var/2);
			//cout<<"bk "<<bk<<endl;
		}
		if(abs(s)<var )
		{
			ak=Z;
			//cout<<"ak "<<ak<<endl;
			ak+=( (1-RTHREE)*ai + (1+RTHREE)*bi );
			//cout<<"ak "<<ak<<endl;
			ak*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE))*pow(2.0,(s)/abs(s)),-abs(s)));
			//cout<<"ak "<<ak<<endl;
			ak*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE)), -(var-abs(s))));
			//ak+=(ld)pow(2*(1+RTHREE*RTHREE), var/2);
			//cout<<"ak "<<ak<<endl;
			
			bk=Z;
			//cout<<"bk "<<bk<<endl;
			bk*=( (1+RTHREE)*ai - (1 - RTHREE)*bi );
			//cout<<"bk "<<bk<<endl;
			bk*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE))*pow(2.0,(s)/abs(s)),-abs(s)));
			//cout<<"bk "<<bk<<endl;
			bk*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE)), -(var-abs(s))));
			//bk+=(ld)pow(2*(1+RTHREE*RTHREE), var/2);
			//cout<<"bk "<<bk<<endl;
		}
	}
	if(k<i and (i-k)%2==0)
	{
		ll var=(i-k);
		Z=(ld)pow((2*(1+RTHREE*RTHREE)),(ll)var/2);
		if(abs(s)>=var)
		{                      //pow(2,(-s)/abs(s))
			ak=Z;
			ak*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE))*pow(2.0,(s)/abs(s)),-(i-k)));
			ak*=(ai);
			ak*=(ld)pow( pow(2.0,(-s)/abs(s)),var-abs(s));
			//ak+=(ld)pow(2*(1+RTHREE*RTHREE), var/2);
			
			bk=Z;
			bk*=((ld)pow((4*(RTWO+RTWO*RTHREE*RTHREE))*pow(2.0,(s)/abs(s)),-(i-k)));
			bk*=(bi );
			bk*=(ld)pow(pow(2.0,(-s)/abs(s)),var-abs(s));
			//bk+=(ld)pow(2*(1+RTHREE*RTHREE), var/2);
		}
		if(abs(s)<var )
		{
			ak=Z;
			ak*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE))*pow(2.0,(s)/abs(s)),-abs(s)));
			ak*=(ai );
			ak*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE)), -(var-abs(s))));
			//ak+=(ld)pow(2*(1+RTHREE*RTHREE), var/2);
			
			bk=Z;
			bk*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE))*pow(2.0,(s)/abs(s)),-abs(s)));
			bk*=(bi );
			bk*=((ld)pow((2*(RTWO+RTWO*RTHREE*RTHREE)), -(var-abs(s))));
			//bk+=(ld)pow(2*(1+RTHREE*RTHREE), var/2);
		}
	}
	
	ld ans=ak+bk;
	printf("%Lf\n", ans);
	return 0;
}
