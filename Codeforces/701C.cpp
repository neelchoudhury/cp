#include<bits/stdc++.h>
#define ll long long int

using namespace std;

set <char> S;
set <char> tmp;
map <char, int> tmp1;

void add(char x){
	tmp1[x]++;
	if(tmp1[x]==1)tmp.insert(x);
}

void rem(char x){
	tmp1[x]--;
	if(tmp1[x]==0)tmp.erase(x);
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	string s;
	cin>>s;

	for(int i=0; i<s.size(); i++){
		S.insert(s[i]);
	}
	int mxcnt=S.size();
	
	int ans=INT_MAX;
	int p2=0;
	for(int i=0; i<s.size(); i++){
		while(p2<s.size() && tmp.size()<mxcnt){
			add(s[p2]);
			p2++;
		}
		if(tmp.size()==mxcnt)
		ans=min(ans, p2-i);

		rem(s[i]);
	}
	cout<<ans;
	return 0;
}
