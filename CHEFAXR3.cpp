#include<bits/stdc++.h>
#define ll long long int
#define  asd 75 
int n;
 
using namespace std;
 
ll kadane(ll* arr, ll* start, ll* finish, ll n)
{
    // initialize sum, maxSum and
    ll sum = arr[0], maxSum = INT_MIN, i;
 
    // Just some initial value to check for all negative values case
    *finish = -1;
 
    // local variable
    ll local_start = 0;
 
    for (i = 1; i < n; ++i)
    {
        sum =(sum^arr[i]);
        if (sum < 0)
        {
            sum = 0;
            local_start = i+1;
        }
        else if (sum > maxSum)
        {
            maxSum = sum;
            *start = local_start;
            *finish = i;
        }
    }
 
     // There is at-least one non-negative number
    if (*finish != -1)
        return maxSum;
 
    // Special Case: When all numbers in arr[] are negative
    maxSum = arr[0];
    *start = *finish = 0;
 
    // Find the maximum element in array
    for (i = 1; i < n; i++)
    {
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
            *start = *finish = i;
        }
    }
    return maxSum;
}
 
 
 
// Driver program to test above functions
int main()
{
   ll t;
  //int n;
	scanf("%lld", &t);
	ll a[asd][asd];
	while(t--)
	{
		cin>>n;
	
		ll val;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
				scanf("%lld", &a[i][j]) ;
		}
	int COL=n;
	ll maxSum = INT_MIN, finalLeft, finalRight, finalTop, finalBottom;
 	int ROW=COL;
    ll left, right, i;
    ll temp[ROW], sum, start, finish;
 
    // Set the left column
    for (left = 0; left < COL; ++left)
    {
        // Initialize all elements of temp as 0
        memset(temp, 0, sizeof(temp));
 		//temp[0]=a[0][left];
        // Set the right column for the left column set by outer loop
        for (right = left; right < COL; ++right)
        {
        	
            // Calculate sum between current left and right for every row 'i'
            if(right==left)
            {
            	for (i = 0; i < ROW; ++i)
                	temp[i] = a[i][right];
            }
            else
            {
            	for (i = 0; i < ROW; ++i)
                	temp[i] = temp[i]^a[i][right];
            }
 
            // Find the maximum sum subarray in temp[]. The kadane() function
            // also sets values of start and finish.  So 'sum' is sum of
            // rectangle between (start, left) and (finish, right) which is the
            //  maximum sum with boundary columns strictly as left and right.
            sum = kadane(temp, &start, &finish, ROW);
 
            // Compare sum with maximum sum so far. If sum is more, then update
            // maxSum and other output values
            if (sum > maxSum)
            {
                maxSum = sum;
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = finish;
            }
        }
    }
 
    // Print final values
    //printf("(Top, Left) (%d, %d)\n", finalTop, finalLeft);
    //printf("(Bottom, Right) (%d, %d)\n", finalBottom, finalRight);
    printf("%lld\n", maxSum);
	}	 
    return 0;
} 
