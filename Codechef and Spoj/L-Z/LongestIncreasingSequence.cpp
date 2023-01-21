// C++ program to find length of longest increasing subsequence
// in O(n Log n) time
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
 
#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])
 
// Binary search (note boundaries in the caller)
// A[] is ceilIndex in the caller
/*int CeilIndex(int A[], int l, int r, int key)
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
    int A[] = { 2, 5, 3, 7, 11, 8, 10, 13, 6 };
    int n = ARRAY_SIZE(A);
    printf("Length of Longest Increasing Subsequence is %d\n",
           LongestIncreasingSubsequenceLength(A, n));
 
    return 0;
}*/




#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
 
int a,num[120000],n,ans[120000],sz;
 
int main(){ 
	while (scanf("%d",&n) == 1){
		for(a=0;a<n;a++) scanf("%d",&num[a]);
		sz=0;
		for(a=0;a<n;a++) {
			int* it = lower_bound(ans,ans+sz,num[a]);
			if (it != ans+sz) *it=num[a];
			else ans[sz++]=num[a];
			
			for(int i=0;i<sz; i++)
			cout<<ans[i]<<" ";
		cout<<endl;
		}
		
		printf("%d\n",sz);
	}
	return 0;
}


