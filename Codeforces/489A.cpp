#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll n;
	ll a[3005];
	vector<ll> answer1,answer2;
	scanf("%I64d", &n);
	for(ll i=0; i<n;i++)
		scanf("%I64d", &a[i]);
	 for (int i = 0; i < n; i++)
    {
        int j = i;
        for (int t = i; t < n; t++)
        {
            if (a[j] > a[t])
                j = t;
    	}
        if (i != j)
        {
            answer1.push_back(i);
            answer2.push_back(j);
        }
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    cout<<answer1.size()<<endl;
    for(int i=0; i<answer1.size(); i++)
    	cout<<answer1[i]<<" "<<answer2[i]<<endl;
    return 0;
}
