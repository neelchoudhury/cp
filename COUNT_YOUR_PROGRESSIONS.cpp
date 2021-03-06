#include<bits/stdc++.h>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define memo(a,v) memset(a,v,sizeof(a))
#define CLR(a) memo(a,0)
#define pb push_back
#define all(a) a.begin(),a.end()
#define eps (1e-9)
#define inf (1<<29)
#define i64 long long
#define u64 unsigned i64
#define AIN(a,b,c) assert(a<=b && b<=c)
#define MOD 1000000009

int cnt[105][205];

int power(int a,int k){
    if(k == 0) return 1;
    int ret = power(a,k/2);
    ret = (ret*(i64)ret) % MOD;
    if(k & 1){
        ret = (a*(i64)ret) % MOD;
    }
    return ret;
}
int main(){
    int t,i,j,x,ans,n;
    //scanf("%d",&t);
    t=1;
    AIN(1,t,10);
    while(t--){
        CLR(cnt);
        scanf("%d",&n);
        AIN(1,n,200000);
        ans = n + 1;
        for(i = 0;i<n;i++){
            scanf("%d",&x);
            AIN(1,x,100);
            for(j = 0;j<=100;j++){
                cnt[x][x-j+100]+=cnt[j][x - j+100];
                cnt[x][x-j+100]%=MOD;
            }
            for(j = -100;j<=100;j++){
                cnt[x][j + 100]++;
                cnt[x][j+100]%=MOD;
                ans --;
            }
        }
        ans = (ans + MOD) % MOD;
 //       ans = 0;
        for(i = 1;i<=100;i++){
            for(j = -100;j<=100;j++){
                ans=(ans + cnt[i][j+100]) % MOD;
            }
        }
        //ans = (power(2,n) - ans )%MOD;
        ans = (ans + MOD)%MOD;
        printf("%d\n",ans);
    }
	return 0;
}