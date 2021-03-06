#include <cstdio>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
const int N = 100010;
int n, m, k, ba[26], bb[26], bs[26];
int d, res, prvi, drugi;
char s[N], a[N], b[N], resenje[N];
 
int main()
{
    scanf("%s %s %s", s + 1, a + 1, b + 1);
    n = strlen(s + 1);
    m = strlen(a + 1);
    k = strlen(b + 1);
    for (int i = 1; i <= n; i++) bs[s[i] - 'a']++;
    for (int i = 1; i <= m; i++) ba[a[i] - 'a']++;
    for (int i = 1; i <= k; i++) bb[b[i] - 'a']++;
    for (int i = 0; ; i++)
    {
        int x = n;
        for (int j = 0; j < 26; j++) if (bb[j]) x = min(x, bs[j] / bb[j]);
        if (x + i > res)
        {
            res = x + i;
            prvi = i;
            drugi = x;
        }
        bool f = false;
        for (int j = 0; j < 26; j++) if (bs[j] < ba[j])
        {
            f = true;
            break;
        } else
        bs[j] -= ba[j];
        if (f) break;
    }
    for (int i = 1; i <= prvi; i++)
        for (int j = 1; j <= m; j++) resenje[++d] = a[j];
    for (int i = 1; i <= drugi; i++)
        for (int j = 1; j <= k; j++) resenje[++d] = b[j];
    for (int i = 0; i < 26; i++) bs[i] = -ba[i] * prvi - bb[i] * drugi;
    for (int i = 1; i <= n; i++) bs[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        for (int j = 1; j <= bs[i]; j++) resenje[++d] = 'a' + i;
    for (int i = 1; i <= n; i++) printf("%c", resenje[i]);
    return 0;
}
