#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll  long long int
#define X first
#define Y second
#define pf printf
#define sc scanf
#define pii pair<int,int>

using namespace std;

int a[3001];
int b[3001];
int main()
{
    int N,x,i,j,k;
    cin >>N>>x;

    for(i=1;i<=N;i++)
    cin >>a[i];
    for(i=1;i<=N;i++)
    cin >>b[i];

    vector< pair<double,int> > v;
    for(i=1;i<=N;i++)
    {
        double s=abs(x-a[i]*1.0)/b[i];
        v.push_back(make_pair(s,i-1));
    }
    sort(v.begin(),v.end());

    if(v[0].X==v[1].X)
    cout <<"-1\n";
    else
    cout <<v[0].Y<<endl;

    return 0;
}