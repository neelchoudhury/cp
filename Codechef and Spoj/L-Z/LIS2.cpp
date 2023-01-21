#include<bits/stdc++.h>
#define ll long long int
#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])

using namespace std;

int a[100010][2];
int tailTable[100010][2];

int CeilIndex(int A[][2], int l, int r, int key0, int key1)
{
    while (r - l > 1)
    {
        int m = l + (r - l)/2;
        if (A[m][0]>=key0 or A[m][1]>=key1)
            r = m;
        else
            l = m;
    }
    return r;
}
 
int LongestIncreasingSubsequenceLength(int A[][2], int size)
{
    // Add boundary case, when array size is one
 
   // int *tailTable   = new int[size][2];
    int len; // always points empty slot
 
    memset(tailTable, 0, sizeof(tailTable[0])*size);
 
    tailTable[0][0] = A[0][0],tailTable[0][1] = A[0][1];
    len = 1;
    for (int i = 1; i < size; i++)
    {
        if (A[i][0] < tailTable[0][0] and A[i][1] < tailTable[0][1] )
            // new smallest value
            tailTable[0][0] = A[i][0],  tailTable[0][1]=A[i][1] ;
 
        else if (A[i][0] >= tailTable[len-1][0] or A[i][1] >= tailTable[len-1][1])
            // A[i] wants to extend largest subsequence
            tailTable[len][0] = A[i][0], tailTable[len][1] = A[i][1], len+=1;
 
        else
            {// A[i] wants to be current end candidate of an existing
            // subsequence. It will replace ceil value in tailTable
            int x=CeilIndex(tailTable, -1, len-1, A[i][0], A[i][1]);
            tailTable[x][0] = A[i][0];
            tailTable[x][1] = A[i][1];}
    }
 
    //delete[] tailTable;
    return len;
}

int main()
{
	int n;
	scanf("%d", &n);
	memset(a,0,sizeof(a));
	for(int i=0; i<n; i++)
		scanf("%d %d", &a[i][0], &a[i][1]);
	int ans=LongestIncreasingSubsequenceLength(a,n);
	printf("%d\n", ans);
	return 0;
}
