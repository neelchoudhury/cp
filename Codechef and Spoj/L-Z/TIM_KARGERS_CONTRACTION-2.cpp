// Karger's algorithm to find Minimum Cut in an
// undirected, unweighted and connected graph.
#include <bits/stdc++.h>
#include <sstream>
#define ll  int
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
 

vector<ll> adj[210], ad[210];
vector<pair<ll, ll> > v;
vector<pair<ll, ll> >::iterator ii; 
int edg = 0;
int n = 0;
pair<ll,ll> p;
// a structure to represent a unweighted edge in graph
struct Edge
{
    int src, dest;
};
 
// a structure to represent a connected, undirected
// and unweighted graph as a collection of edges.
struct Graph
{
    // V-> Number of vertices, E-> Number of edges
    int V, E;
 
    // graph is represented as an array of edges.
    // Since the graph is undirected, the edge
    // from src to dest is also edge from dest
    // to src. Both are counted as 1 edge here.
    Edge* edge;
};
 
// A structure to represent a subset for union-find
struct subset
{
    int parent;
    int rank;
};
 
// Function prototypes for union-find (These functions are defined
// after kargerMinCut() )
int find(struct subset subsets[], int i);
void Union(struct subset subsets[], int x, int y);
 
// A very basic implementation of Karger's randomized
// algorithm for finding the minimum cut. Please note
// that Karger's algorithm is a Monte Carlo Randomized algo
// and the cut returned by the algorithm may not be
// minimum always
int kargerMinCut(struct Graph* graph)
{
    // Get data of given graph
    int V = graph->V, E = graph->E;
    Edge *edge = graph->edge;
 
    // Allocate memory for creating V subsets.
    struct subset *subsets = new subset[V];
 
    // Create V subsets with single elements
    for (int v = 0; v < V; ++v)
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
 
    // Initially there are V vertices in
    // contracted graph
    int vertices = V;
 
    // Keep contracting vertices until there are
    // 2 vertices.
    while (vertices > 2)
    {
       // Pick a random edge
       int i = rand() % E;
 
       // Find vertices (or sets) of two corners
       // of current edge
       int subset1 = find(subsets, edge[i].src);
       int subset2 = find(subsets, edge[i].dest);
 
       // If two corners belong to same subset,
       // then no point considering this edge
       if (subset1 == subset2)
         continue;
 
       // Else contract the edge (or combine the
       // corners of edge into one vertex)
       else
       {
          // printf("Contracting edge %d-%d\n",
                 // edge[i].src, edge[i].dest);
          vertices--;
          Union(subsets, subset1, subset2);
       }
    }
 
    // Now we have two vertices (or subsets) left in
    // the contracted graph, so count the edges between
    // two components and return the count.
    int cutedges = 0;
    for (int i=0; i<E; i++)
    {
        int subset1 = find(subsets, edge[i].src);
        int subset2 = find(subsets, edge[i].dest);
        if (subset1 != subset2)
          cutedges++;
    }
 
    return cutedges;
}
 
// A utility function to find set of an element i
// (uses path compression technique)
int find(struct subset subsets[], int i)
{
    // find root and make root as parent of i
    // (path compression)
    if (subsets[i].parent != i)
      subsets[i].parent =
             find(subsets, subsets[i].parent);
 
    return subsets[i].parent;
}
 
// A function that does union of two sets of x and y
// (uses union by rank)
void Union(struct subset subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
 
    // Attach smaller rank tree under root of high
    // rank tree (Union by Rank)
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
 
    // If ranks are same, then make one as root and
    // increment its rank by one
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}
 
// Creates a graph with V vertices and E edges
struct Graph* createGraph(int V, int E)
{
    Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
}
 
// Driver program to test above functions
int main()
{
    /* Let us create following unweighted graph
        0------1
        | \    |
        |   \  |
        |     \|
        2------3   */
    string s;
    n = 200;
    for(int i = 1; i<=n; i++)
    {
        getline(cin, s);
        // inp.str(s);
        int flag = 0;
        // cout<<s<<endl;
        int num = 0;
        for(int j = 0; j<s.length(); j++)
        {
            if(s[j]>= '0' && s[j]<= '9' )
            {
                num = num*10 + s[j] - '0';
            }
            else
            {
                if(flag)
                {
                    ad[i].pb(num);
                    edg ++;
                    pair<ll,ll> p ;
                    p.ff = min(i, num);
                    p.ss = max(i, num);
                    ii = find(v.begin(), v.end(), p );
                    if(ii == v.end())
                        v.pb(p);
                }
                num = 0;
                flag = 1;
            }
        }
        if(num!= 0)
            ad[i].pb(num), edg++;

    }
    edg/=2;
  
    // Use a different seed value for every run.
    int ans  = INT_MAX;
    for(int  i = 0; i<30; i++)
    {
        int V = n;  // Number of vertices in graph
        int E = edg;  // Number of edges in graph
        struct Graph* graph = createGraph(V, E);
     
        // add edge 0-1
        for(int i = 0; i<edg; i++)
        {
            graph->edge[i].src = v[i].ff;
            graph->edge[i].dest = v[i].ss;
        }
        for(int i = 0; i<v.size(); i++)
        {
            cout<<graph->edge[i].src<<" ";
            cout<<graph->edge[i].dest<<endl;
        }
        srand(time(NULL));
        ll a = kargerMinCut(graph);
        printf("\nCut found by Karger's randomized algo is %d\n",
               a);
        ans = min(ans, a);

    }
    cout<<"ans "<<ans<<endl;
 
    return 0;
}