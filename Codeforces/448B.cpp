#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%lld\n",n)
#define sc(n) scanf("%lld", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

ll ara1[30],ara2[30];

int main()
{
	string s1="",s2="";
    cin>>s1>>s2;

    bool automataon=0,arra=0, both=0;

    ll j=0;

    for(ll i=0; i<s1.length(); i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
        }
        if(j==s2.length()) break;
    }

    if(j==s2.length()) automataon=1;

    for(ll i=0; i<s1.length(); i++) ara1[s1[i]-'a']++;
    for(ll i=0; i<s2.length(); i++) ara2[s2[i]-'a']++;

    bool test=0,need=0;

    for(ll i=0; i<26; i++)
    {
        if(ara1[i]!=ara2[i])
        {
            test=1;
        }
    }

    if(test==0 && s1!=s2) arra=1;

    if(arra && automataon)
        cout<<"both"<<endl;
    else if(automataon)
        cout<<"automaton"<<endl;
    else if(arra)
        cout<<"array"<<endl;
    else
    {
        test=1;
        for(ll i=0; i<26; i++)
        {
            if(ara1[i]<ara2[i])
            {
                test=0;
            }
        }
        if(test==1)
            cout<<"both"<<endl;
        else
            cout<<"need tree"<<endl;
    }

    return 0;
}