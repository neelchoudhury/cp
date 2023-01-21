#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define X first
#define Y second 
#define ios ios_base::sync_with_stdio(false);
#define V 52
#define N 200010

using namespace std;

typedef pair<ll,ll> pi;
pi v[N],w[N];
std::vector<pi> newv;

 

int main()
{
    ll n,m,k,x,s,req,cur,ans=0,ind,mn,sz;
   cin>>n>>m>>k;
   cin>>x>>s;
   for(int i=0;i<m;i++)
      cin>>v[i].Y;
   for(int i=0;i<m;i++)
      cin>>v[i].X;
   sort(v,v+m);
   newv.pb({v[0].X,v[0].Y});
   mn=v[0].Y;
   for(int i=0;i<m;i++)
   {
      
      if(v[i].Y<mn)
      {
            newv.pb({v[i].X,v[i].Y});
            mn=v[i].Y;
      }
   }
   sort(newv.begin(),newv.end());
   sz=newv.size();

    for(int i=0;i<k;i++)
      cin>>w[i].X;
    for(int i=0;i<k;i++)
       cin>>w[i].Y;
    ans=n*x;

    
    ind=lower_bound(newv.begin(),newv.end(),pi(s,-1))-newv.begin();
    if(ind==sz)
      ind--;
    else if(newv[ind].X>s)
      ind--;
   
    if(ind>=0)
      ans=min(ans,newv[ind].Y*(n));
   


    for(int i=0;i<k;i++)
    {
        if(w[i].Y<=s)
        {
            ll k2=s-w[i].Y;
            
             ind=lower_bound(newv.begin(),newv.end(),pi(k2,-1))-newv.begin();
          if(ind==sz)
            ind--;
          else if(newv[ind].X>k2)
            ind--;
          
          if(ind>=0)
            ans=min(ans,max(0LL,(n-w[i].X))*newv[ind].Y);

          ans=min(ans,max(0LL,(n-w[i].X))*x);


       


        }
    }
    cout<<ans<<endl;
    
}