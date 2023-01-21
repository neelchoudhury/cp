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

binary_search(lo, hi, p):
   while lo < hi:
      mid = lo + (hi-lo)/2
      if p(mid) == true:
         hi = mid
      else:
         lo = mid+1
          
   if p(lo) == false:
      complain                // p(x) is false for all x in S!
      
   return lo         // lo is the least x for which p(x) is true




   / warning: there is a nasty bug in this snippet!
binary_search(lo, hi, p):
   while lo < hi:
      mid = lo + (hi-lo)/2    // note: division truncates
      if p(mid) == true:
         hi = mid-1
      else:
         lo = mid
          
   if p(lo) == true:
      complain                // p(x) is true for all x in S!
      
   return lo         // lo is the greatest x for which p(x) is false