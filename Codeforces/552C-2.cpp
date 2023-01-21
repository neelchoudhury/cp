#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll w,m,sz,i;
ll a[40];
 
int main()
{
	ll flag = 1;
    cin >> w >> m;
    while (m)
    {
    	a[sz++] = m%w;
    	m /= w;
    }
	for (i = 0; i <= sz; i++)
		if (a[i] != 0 && a[i] != 1 && a[i] != w-1 && a[i] != w)
		{
		   flag = 0;
		   break;
        }
        else
        {
			if (a[i] == w-1 || a[i] == w)
			   a[i+1]++;
        }
	if (flag)
	   cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
