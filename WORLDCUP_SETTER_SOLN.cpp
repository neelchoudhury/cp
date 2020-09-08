#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define mp	make_pair
#define pb push_back
#define max_balls 300

ll mod = 1e9+7;

ll comb[max_balls+1][max_balls+1];

void pre()
{
	memset(comb,0,sizeof(comb));
	for(int i=0;i<=max_balls;i++)	comb[i][i] = 1, comb[i][0] = 1;
	for(int i=2;i<=max_balls;i++)
		for(int j=1;j<i;j++)
			comb[i][j] = (comb[i-1][j] + comb[i-1][j-1])%mod;
}

ll get_comb(int a,int b)
{
	if( a< b)	return (ll)0;
	return comb[a][b];
}

void solve()
{
	int runs,balls,wk;
	cin>>runs>>balls>>wk;
	ll sum = 0 ,sixes,fours;
	if( runs > balls*6 ){
		printf("0\n");
		return;
	}
	for(int i=0;i<=runs/6;i++){
		sixes = i;
		fours = ( runs - 6*sixes )/4;
		if( 4*fours + 6*sixes != runs )	continue;
		for(int wickets = 0;wickets<=wk;wickets++){
			sum = (sum + get_comb(balls,fours) * (( get_comb(balls-fours,sixes) * get_comb(balls-fours-sixes,wickets) )%mod) )%mod;
		}
	}
	cout<<sum<<endl;
}

int main()
{
	pre();
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		solve();
	}
	return 0;
}
