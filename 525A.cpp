#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int a[26];
int main()
{
    string str;
    int i,n;
    int ans=0;
    for(i=0;i<26;i++)
    {
        a[i]=0;
    }
    cin>>n;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(i%2==0)
        {
            a[str[i]-97]++;
        }
        else
        {
            if(a[str[i]-65]==0)
            {
                ans++;
            }
            else
            {
                a[str[i]-65]--;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
