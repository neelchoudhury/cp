#include<bits/stdc++.h>
#include<complex>
using namespace std;
#define ll long long


typedef pair<ll,ll> pp;
typedef vector<pair<ll,ll> > vpp;


ll min(ll a,ll b)
{
    return(a<b)?a:b;
}
ll max(ll a,ll b)
{
    return(a>b)?a:b;
}
typedef struct $
{
    struct $ *left;
    struct $ *right;
}ss;
void insert(ss *head,ll a,ll count)
{
    if(count ==-1)return;
    if((a>>count)&1)
    {
        if(head->right==NULL)
        {
            head->right=(ss *)malloc(sizeof(ss));
            head->right->right=NULL;
            head->right->left=NULL;
        }
        insert(head->right,a,count-1);
    }
    else
    {
        if(head->left==NULL)
        {
            head->left=(ss *)malloc(sizeof(ss));
            head->left->right=NULL;
            head->left->left=NULL;
        }
        insert(head->left,a,count-1);
    }
}
void recieve(ss *head,ll a,ll count,ll &num)
{
    if(count==-1)return;
    if((a>>count)&1)
    {
        if(head->left!=NULL)
            recieve(head->left,a,--count,num);
        else
        {
            num+=(ll)pow(2,count);
            recieve(head->right,a,--count,num);
        }
    }
    else
    {
        if(head->right!=NULL)
        {
            num+=(ll)pow(2,count);
            recieve(head->right,a,--count,num);
        }
        else
            recieve(head->left,a,--count,num);
    }
}
int main()
{
    ll t,n,num,a[400005],prefix[400005]={0},ma=0,b[400005],ans1[400005],ans2[400005];
    memset(b,0,sizeof(b));
    memset(ans1,0,sizeof(ans1));
    memset(ans2,0,sizeof(ans2));
    memset(prefix,0,sizeof(prefix));
     
        ma=0;
        scanf("%lld",&n);
        for(ll i=0;i<n;i++)
            scanf("%lld",a+i);
        ss *x=(ss *)malloc(sizeof(ss));
        insert(x,0,31);
        for(ll i=1;i<=n;i++)
        {
            prefix[i]=prefix[i-1]^a[i-1];
            insert(x,prefix[i],31);
            num=0;
            recieve(x,prefix[i],31,num);
            ma=max(ma,num^prefix[i]);
            ans1[i]=ma;
        }
        
        memset(b,0,sizeof(b));
        memset(prefix,0,sizeof(prefix));
        //printf("%lld\n",ma );
        
        insert(x,0,31);
        for(ll i=n-1;i>=0;i--)
        {
            prefix[i]=prefix[i+1]^a[i+1];
            insert(x,prefix[i],31);
            num=0;
            recieve(x,prefix[i],31,num);
            ma=max(ma,num^prefix[i]);
            ans2[i]=ma;
        }
        
        ll answer=0;
         for(int i=1; i<=n; i++)
         {
         	answer=max(answer,ans1[i]+ans2[i-1]);
         }
         printf("%lld\n", &answer);
    
    return 0;
}
