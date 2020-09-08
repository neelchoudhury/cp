#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;


  // Definition for an interval.
  struct Interval {
      int start;
      int end;
      Interval()  {start=0, end=0 ;}
      Interval(int s, int e)  {start=s, end=e ;}
  };
 
vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
   int ind = 0;
    
    if(newInterval.start > newInterval.end)
    {
        swap(newInterval.start, newInterval.end);
    }
    
    if(intervals.size() == 0)
    {
        intervals.push_back(newInterval);
        return intervals;
    }
    
    for(int i = 0; i<intervals.size(); i++)
    {
        
        // cout<<intervals[i].start <<" "<< newInterval.start<<endl;
        if(intervals[i].start <= newInterval.start && intervals[i].end >= newInterval.start)
        {
            if(newInterval.end <= intervals[i].end)
            {
                return intervals;
            }
            ind = i;
            break;
        }
        if(i==0)
        {
            if(intervals[i].start > newInterval.start)
            {
                if(intervals[i].start <= newInterval.end)
                {
                    intervals[i].start = newInterval.start;
                    ind = i;
                    break;
                    
                }
                // else if(intervals[i].start > newInterval.end)
                // {
                //     vector<Interval> res;
                //     for(int j = 0; j<i; j++)
                //     {
                //         res.push_back(intervals[j]);
                //     }
                //     res.push_back(newInterval);
                //     for(int j = i; j<intervals.size(); j++)
                //     {
                //         res.push_back(intervals[j]);
                //     }
                //     return res;
                // }
            }
        }
        if(intervals[i].start > newInterval.start && intervals[i].start > newInterval.end)
        {
            vector<Interval> res;
            for(int j = 0; j<i; j++)
            {
                res.push_back(intervals[j]);
            }
            res.push_back(newInterval);
            for(int j = i; j<intervals.size(); j++)
            {
                res.push_back(intervals[j]);
            }
            return res;
        }
        if(i == intervals.size() - 1)
        {
            
            if(intervals[i].start >= newInterval.start && intervals[i].end <= newInterval.end)
            {
                intervals[i].start = newInterval.start;
                intervals[i].end = newInterval.end;
                
                return intervals;
            }
            ind = i+1;
            break;
        }
        if(intervals[i].start > newInterval.start)
        {
            intervals[i].start = newInterval.start;
            ind = i;
            break;
        }
    }
    
    
    int st = ind;
    
    while(intervals[ind].end < newInterval.end && ind<intervals.size() )
    {
        // cout<<intervals[ind].end <<" "<< newInterval.end<<endl;
        if(ind == intervals.size()-1)
        {
            // cout<<" hey "<<endl;
            intervals[ind].end = newInterval.end;
            // ind++;
            break;
        }
        ind++;
    }
    // ind --;
    
    if(intervals[ind].start > newInterval.end)
    {
        if(ind >=0)
        {
            ind --;
            intervals[ind].end = newInterval.end;
            
        }
    }
    int en = ind;
    
    if(newInterval.end < intervals[0].start)
    {
        // cout<<"enter"<<endl;
        vector<Interval> res;
        res.push_back(newInterval);
        for(int i = 0; i<intervals.size(); i++)
        {
            res.push_back(intervals[i]);
        }
        
        return res;
    }
    
    if(newInterval.start > intervals[intervals.size() - 1].end )
    {
        intervals.push_back(newInterval);
        return intervals;
    }
    if(intervals[0].start >= newInterval.start && intervals[intervals.size()-1].end <= newInterval.end )
    {
        vector<Interval> res;
        res.push_back(newInterval);
        return res;
    }
    
    vector<Interval> res;
    
    for(int i = 0; i<= st; i++)
    {
        res.push_back(intervals[i]);
    }
    res[st].end = intervals[en].end;
    for(int i = en+1; i<intervals.size(); i++)
    {
        res.push_back(intervals[i]);
    }
    
    return res;
}


int main()
{
	vector<Interval> intervals;
	Interval i1 = new Interval(1,2);
	Interval i2 = new Interval(3,6);

	intervals.pb(i1);
	intervals.pb(i2);

	Interval i3 = new Interval(10,8);

	vector<Interval> res = insert(intervals, i3);
}