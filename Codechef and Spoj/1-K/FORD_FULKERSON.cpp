#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 6

using namespace std;

//CODE IS CORRECT

//Zero is starting index. So initial paretn indexes are set to -1

lvector <ll> v[MAX];
ll cap[MAX][MAX];
ll res[MAX][MAX];
ll par[MAX];
ll act[MAX];
ll a[MAX];

ll find(ll sour,ll sink)
{
    ll curr;
    ll ans=0;
    ll from;
    while(1)
    {
        memset(par,-1,sizeof par);
        queue<int> q;
        q.push(sour);
        par[sour]=-1;
        act[sour]=INF;
        while(!q.empty())
        {
            curr=q.front();
            q.pop();
            for(int i=0;i<v[curr].size();i++)
            {
                if(par[v[curr][i]]==-1 && cap[curr][v[curr][i]]-res[curr][v[curr][i]]>0)
                {
                    act[v[curr][i]]=min(act[curr],cap[curr][v[curr][i]]-res[curr][v[curr][i]]);
                    par[v[curr][i]]=curr;
                    q.push(v[curr][i]);
                    if(v[curr][i]==sink)
                    {
                        ans+=(act[sink]);
                        break;
                    }
                }
            }
        }
        if(par[sink]==-1)
        {
            break;
        }
        else
        {
            curr=sink;
            while(par[curr]!=-1)
            {
                from=par[curr];
                res[from][curr]+=act[sink];
                res[curr][from]-=act[sink];
                curr=from;
            }
        }
    }
    return ans;
}
  
int main()
{ 
     
 	for(ll i=0; i<6; i++)
 	{
 		for(ll j=0; j<6; j++)
 			cin>>graph[i][j];
 	}
    cout << "The maximum possible flow is " << fordFulkerson( 0, 5);
 
    return 0;
}