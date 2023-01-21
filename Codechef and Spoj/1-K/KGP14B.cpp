#include <bits/stdc++.h>

using namespace std;

int dp[1<<10][1<<10];
string s1,s2; 

int rec(int i, int j){
	
	int &ret=dp[i][j]; 
	if(ret!=-1)return dp[i][j]; 
	if(i<1 or j<1)return ret=i+j;
	 
	if(s1[i-1]==s2[j-1])
		return ret=1+rec(i-1,j-1);
	
	else return ret=1+min(rec(i-1,j),rec(i,j-1));
}

int main() {
	int t;
	cin >> t;
	for(int p=1; p<=t; p++){
		memset(dp,-1,sizeof(dp));
		int n,m;
		cin >> n >> m >> s1 >> s2;
		cout << "Case " << p << ": " << rec(s1.length(),s2.length()) << endl;
	}
	return 0;
}
