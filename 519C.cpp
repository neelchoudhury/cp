# include <bits/stdc++.h>

using namespace std;

# define fi cin
# define fo cout

int main(void)
{
    int n,m,ans = 0;
    fi>>n>>m;
    while (n > 0 && m > 0 && m + n >= 3)
    {
        ++ans;
        if (m < n) --m,n-=2;else --n,m-=2;
    }
    return fo << ans << '\n',0;
}
