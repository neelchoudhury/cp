#include<bits/stdc++.h>
#define ll unsigned long long int
#define pb push_back

using namespace std;

ll mulmod(ll a,ll b,ll c){
    ll x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

ll modulo(ll a,ll b,ll c){
    ll x = 1, y = a;
       
        while(b>0){
                if(b&1) x = mulmod(x,y,c);
                y = mulmod(y,y,c);
                b >>= 1;
        }
       
        return x;
}



bool Miller(ll p, int it){
        if(p<2) return false;
        if(p==2) return true;
        if((p&1)==0) return false;
        if((p%3)==0 || (p%5)==0 || (p%7)==0) return false;
       
        ll s = p-1;
        while((s&1)==0) s >>= 1;
       
        while(it--){
                ll a = rand()%(p-1)+1,temp = s;
                ll mod = modulo(a,temp,p);
               
                if(mod==-1 || mod==1) continue;
               
                while(temp!=p-1 && mod!=p-1){
                        mod = mulmod(mod,mod,p);
                        temp <<= 1;
                }
               
                if(mod!=p-1) return false;
        }
       
        return true;
}


int main()
{
	 
	ll t,x;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &x);
		bool f=Miller(x,10);
		 
		if(f==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}
	return 0;
}
