#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010], N;
ll b[100010], K;
ll inc[100010], dic[100010];

int main()
{
	 ll t=10;
	 while(t--)
	 {
	 	memset(a,0,sizeof(a));
	 	memset(b,0,sizeof(b));
	 	memset(inc,0,sizeof(inc));
	 	memset(dic,0,sizeof(dic));
	 	scanf("%lld", &N);
		for (ll i = 0; i < N; i++)
			scanf("%lld", &a[i]);

		K = 0;
		for (ll i = 0; i < N; i++) {
			ll left = -1, right = K;
			while (right - left > 1) {
				ll mid = (left + right) / 2;
				if (b[mid] > a[i])
					right = mid;
				else
					left = mid;
			}
			inc[i] = right+1;
			b[right] = a[i];
			if (right == K) K++;
		}

		K = 0;
		for (ll i = N-1; i >= 0; i--) {
			ll left = -1, right = K;
			while (right - left > 1) {
				ll mid = (left + right) / 2;
				if (b[mid] < a[i])
					right = mid;
				else
					left = mid;
			}
			dic[i] = right+1;
			b[right] = a[i];
			if (right == K) K++;
		}

		ll len = inc[0];
		for (ll i = 0; i < N; i++)
			if (inc[i] > len) len = inc[i];

		vector<ll> out;
		for (ll i = 0; i < N; i++)
			if (inc[i] + dic[i] - 1 == len)
				out.push_back(a[i]);

		sort(out.begin(), out.end());

		printf("%lld\n", out.size());
		for (ll i = 0; i < (ll)out.size(); i++)
			printf(i == 0 ? "%lld" : " %lld", out[i]);
		printf("\n");
	}
}
