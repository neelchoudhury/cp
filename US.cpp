#include<iostream>

using namespace std;

int main()
{
	string s1 = "apoorva",s2 = "neeladree";
	
	int ans = 0;
	
	for(int i = 0; i<s1.length(); i++)
	{
		ans += (s1[i]-'a'+1);
	}
		
	for(int i = 0; i<s2.length(); i++)
	{
		ans -= (s2[i]-'a'+1);
	}
	
	cout<<ans<<endl;
	return 0;
}
