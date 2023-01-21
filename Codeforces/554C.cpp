#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll modulo(ll a,ll b,ll c)
{
    long long x=1,y=a; // long long is taken to avoid overflow of intermediate results
    while(b > 0){
        if(b%2 == 1){
            x=(x*y)%c;
        }
        y = (y*y)%c;  
        b /= 2;
    }
    return x%c;
}



int main()
{
	
	
	
	
	ll f[1010];

	f[0]=1;
	for(int i=1; i<=1000; i++)
	{
		f[i]=(f[i-1]*i)%MOD;
	}

	/*for(int i=0; i<10; i++)
		cout<<f[i]<<" ";
	cout<<endl;*/
	ll rf[1010];
	rf[0]=(modulo(0,MOD-2,MOD));
	rf[1]=(modulo(1,MOD-2,MOD));
	for(int i=2; i<=1000; i++)
	{
		rf[i]=(rf[i-1]*(modulo(i,MOD-2,MOD)))%MOD;	
	}
	/*for(int i=0; i<10; i++)
		cout<<rf[i]<<" ";
	cout<<endl;*/
	
	
	
	
	
	
	
	
	
	int k;
	cin>>k;
	int c[k+1];
	for(int i=1; i<=k; i++)
		cin>>c[i];
	ll ans=0;
	ll sum=0;
	ll tmp=1;
	for(int i=1; i<=k; i++)
	{
		tmp=0;
		sum=0;
		for(int j=1; j<=k; j++)
		{
			if(j<i)
				sum+=c[j];
			else
				sum+=c[j]-1;
			//cout<<c[j]<<" sum "<<sum<<endl;
		}
		cout<<"     sum "<<sum<<endl;
		tmp=f[sum]%MOD;
		cout<<"tmp"<<tmp<<endl;
			for(int q=1; q<=k; q++)
			{
				cout<<"tmp   "<<tmp<<" "<<(tmp*rf[c[q]])<<" "<<rf[q]<<endl;
				if(q<i )
					tmp=(tmp*rf[c[q]])%MOD ;
				else
					if((c[q]-1)!=0)
						tmp=(tmp*rf[c[q]-1])%MOD;
				//cout<<"tmp2323   "<<tmp<<" "<<(tmp*rf[c[q]])<<" "<<rf[q]<<endl;
			}
		if(i>1)
		{
			cout<<"ene"<<endl;
			tmp=(tmp-sum+MOD)%MOD;
		}
		ans=(ans+tmp)%MOD;
		
		cout<<" i "<<i<<" "<<tmp<<" "<<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
