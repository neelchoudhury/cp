#include <stdio.h>
#include <stdlib.h>
 
long long merge(long long arr[], long long temp[], long long left, long long mid, long long right)
{
  long long i, j, k;
  long long inv_count = 0;
 
  i = left;
  j = mid;  
  k = left;
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
 
 
      inv_count = inv_count + (mid - i);
    }
  }
 
 
  while (i <= mid - 1)
    temp[k++] = arr[i++];
 
 
  while (j <= right)
    temp[k++] = arr[j++];
 
 
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
 
  return inv_count;
}
 
long long mergeSort(long long arr[], long long temp[], long long left,long long right)
{
  long long mid, inv_count = 0;
  if (right > left)
  {
 
    mid = (right + left)/2;
 
 
    inv_count  = mergeSort(arr, temp, left, mid);
    inv_count += mergeSort(arr, temp, mid+1, right);
 
 
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
 
 
 
  int main()
{
        int t;
        scanf("%d",&t);
        long n;
        while(t--)
        {
                scanf("%ld",&n);
                long long a[n],temp[n],i,j;
                for(i=0;i<n;i++){
                        scanf("%lld",&a[i]);
                        temp[i]=0;
                }
                long long count=mergeSort(a,temp,0,n-1);
 
                printf("%lld\n",count);
        }
        return 0;
}
