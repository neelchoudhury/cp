#include <bits/stdc++.h>
using namespace std;

struct P {
  int x, h;
  bool operator < (const P & p) const {
    return x < p.x;
  }
} p[100005];

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &p[i].x, &p[i].h);
  }
  sort(p, p + n);
  if (n <= 2) {
    printf("%d", n);
    return 0;
  }
  int ans = 2;
  for (int i = 1; i < n - 1; i++) {
    if (p[i - 1].x + p[i].h < p[i].x) ans++;
    else if (p[i].h + p[i].x < p[i + 1].x) ans++, p[i].x += p[i].h;
  }
  printf("%d", ans);
}
