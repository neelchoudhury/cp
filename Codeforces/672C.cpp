#include <bits/stdc++.h>
#define int long long
#define inf 1e18

using namespace std;

const int N = 112354;

double dis(double x, double y, double x1, double y1)
{
    return sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}

struct abc{
    double x, y;
};

abc d[N];
double s[N];

main()
{
    int n, m, i, j;
    abc a, b, t;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> t.x >> t.y;
    cin >> n;
    double sum = 0;
    for(i = 1; i <= n; i ++)
    {
        cin >> d[i].x >> d[i].y;
        s[i] = dis(d[i].x, d[i].y, t.x, t.y);
        sum += s[i];
    }
    double ans = inf;
    int id = -1;
    double ss = inf;
    for(i = 1; i <= n; i ++)
    {
        double t = 2 * sum - s[i] + dis(d[i].x, d[i].y, a.x, a.y);
        if(t < ss)
        {
            ss = t;
            id = i;
        }
    }
    ans = min(ans, ss);
    double ss1 = inf;
    for(i = 1; i <= n; i ++)
    {
        double t = ss - s[i] + dis(d[i].x, d[i].y, b.x, b.y);
        if(t < ss1 && id != i)
        {
            ss1 = t;
        }
    }
    ans = min(ans, ss1);
    id = -1;
    ss = inf;
    for(i = 1; i <= n; i ++)
    {
        double t = 2 * sum - s[i] + dis(d[i].x, d[i].y, b.x, b.y);
        if(t < ss)
        {
            ss = t;
            id = i;
        }
    }
    ans = min(ans, ss);
    ss1 = inf;
    for(i = 1; i <= n; i ++)
    {
        double t = ss - s[i] + dis(d[i].x, d[i].y, a.x, a.y);
        if(t < ss1 && id != i)
        {
            ss1 = t;
        }
    }
    ans = min(ans, ss1);
    printf("%.10f", ans);
}
