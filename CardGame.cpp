#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

ll arr[]={1, 3, 10, 35, 126, 462, 1716, 6435, 24310, 92378, 352716, 1352078, 5200300, 20058300, 77558760 };
int main()
{
	int n;
	cin>>n;
	printf("%lld",arr[n-1]);
	return 0;
}
