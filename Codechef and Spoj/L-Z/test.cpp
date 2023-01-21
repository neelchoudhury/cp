#include<bits/stdc++.h>

using namespace std;

struct trie
{
    char ch;
    vector<trie*> next (26, NULL);
};

int main()
{
	vector<vector<int> > v;

	// if(v[0] == NULL)
	v[0].push_back(2);
	cout<<v[0][0]<<endl;

	return 0;
}