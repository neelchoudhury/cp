#include<bits/stdc++.h>
#define ll long long int
#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])

using namespace std;

int a[25];

int CeilIndex(int A[], int l, int r, int key)
{
    while (r - l > 1)
    {
        int m = l + (r - l)/2;
        if (A[m]>=key)
            r = m;
        else
            l = m;
    }
    return r;
}
 
int LongestIncreasingSubsequenceLength(int A[], int size)
{
    // Add boundary case, when array size is one
 
    int *tailTable   = new int[size];
    int len; // always points empty slot
 
    memset(tailTable, 0, sizeof(tailTable[0])*size);
 
    tailTable[0] = A[0];
    len = 1;
    for (int i = 1; i < size; i++)
    {
        if (A[i] < tailTable[0])
            // new smallest value
            tailTable[0] = A[i];
 
        else if (A[i] > tailTable[len-1])
            // A[i] wants to extend largest subsequence
            tailTable[len++] = A[i];
 
        else
            // A[i] wants to be current end candidate of an existing
            // subsequence. It will replace ceil value in tailTable
            tailTable[CeilIndex(tailTable, -1, len-1, A[i])] = A[i];
    }
 
    delete[] tailTable;
    return len;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	int ans=LongestIncreasingSubsequenceLength(a,n);
	printf("%d\n", ans);
	return 0;
}
