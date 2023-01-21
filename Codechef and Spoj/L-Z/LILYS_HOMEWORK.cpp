#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

 

ll a[100010],b[100010],c[100010],temp[100010];

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
	ios;
	ll n;
	cin>>n;
	mem(a),mem(b),mem(c),mem(temp);
	for(ll i=0;i<n; i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	ll j=0;
	ll ans=0;
	ll k=0;
	for(ll i=0; i<n; i++)	
	{
		 if(a[i]!=b[i])
		 {
		 	c[k++]=a[i];
		 }
 
	}
	ll qq=0,ind=0;
	for(ll i=0; i<n; i++)
	{
		if(a[i]>qq)
		{
			qq=a[i];
			ind=i;
		}
	}
	ans=0;
	ll cnt=0;
	for(ll i=0; i<n-1; i++)
	{
		
		ll f=0;
		for(ll j=1; j<n; j++)
		{
			if(a[i]>a[j])
				cnt++,f=1;
			while(a[i]>a[j])
			{
				j++;
				
			}
			cout<<a[i]<<" "<<a[j]<<endl;
				if(f)
				{
					j--;
				swap(a[i],a[j]);
				i=0;
				break;
				}

		}
		 
	}
	cout<< cnt<<endl;
	//cout<< mergeSort(c,temp,0,k-1)<<endl;
	return 0;
}