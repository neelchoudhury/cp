#include <bits/stdc++.h>
    #define ll long long int
    #define inf 1e18
    #define mp make_pair
    #define pb push_back
    #define Mod 1000000007
    #define sc(n) scanf("%lld" , &n);
    #define Max 500005
    #define iosbase ios_base::sync_with_stdio(false);
 
using namespace std;
ll n , k;
 
 
 
struct Interval
{
    int start;
    int end;
};
 
 char arr[2002];
void clear()
{
    for(int i=0 ; i<n ; i++)
    {
        arr[i]='\0';
    }
 
}
 
 
bool compareInterval(Interval i1, Interval i2)
{  return (i1.end - i1.start < i2.end - i2.start)? true: false; }
 
void mergeIntervals(vector<Interval>& intervals)
{
    if (intervals.size() <= 0)
        return;
 
    stack<Interval> s;
 
 
    sort(intervals.begin(), intervals.end(), compareInterval);
 
    clear();
 
 
 
    for (int i = 0 ; i < intervals.size(); i++)
    {
       int start = intervals[i].start;
       int ender = intervals[i].end;
       // cout<<start<<" "<<ender<<endl;
       ll tag=0;
       for(int j= start ; j<= ender ; j++)
       {
            if(arr[j]!= '(' && arr[j]!= ')')
            {
                if(tag==0)
                {
                    arr[j]= '(';
                        tag=1;
                }
                else
                {
                    arr[j]=')';
                    tag=0;
                }
 
            }
       }
 
 
 
    }
 
    ll tag =0;
 
    for(int i=0 ; i<n ; i++)
    {
 
        if(arr[i]!= '(' && arr[i]!= ')')
            {
                if(tag==0)
                {
                    arr[i]= '(';
                        tag=1;
                }
                else
                {
                    arr[i]=')';
                    tag=0;
                }
 
            }
 
 
    }
 
 
    for(int i=0 ; i<n ;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
 
 
 
 
 
 
    return;
}
 
 
 
 
 
int main()
{
    iosbase;
    ll t;
    cin>>t;
    while(t--)
    {
 
        cin>>n>>k;
 
 
 
 
        vector<Interval> intervals;
 
        for(int i=0 ; i<k ; i++)
        {
            ll a , b;
            cin>>a>>b;
            Interval temp;
            temp.start = a;
            temp.end = b;
            intervals.pb(temp);
 
 
        }
        mergeIntervals(intervals);
    }
} 
