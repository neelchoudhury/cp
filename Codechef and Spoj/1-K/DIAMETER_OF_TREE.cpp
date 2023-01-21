#include <vector>
#include <stack>
#include <cstdio>
  
using namespace std;
 
#define MAX 100
using namespace std;
 
vector < int > G[MAX]; /* Graph of vertices MAX */
bool visited[MAX];
 
pair < int ,int > DFS(int A){
    stack < int > S;
    S.push(A);
    visited[A]=true;
    bool flag ;
    int max_height=0;
    int ans_vertex=A;
    int x;
    while(!S.empty()){
        x = S.top();
        flag = false;
        for(int i=0;i<G[x].size();i++){
            if(!visited[G[x][i]]){
                flag = true;
                S.push(G[x][i]);
                visited[G[x][i]]=true;
                break;
            }
        }
        if(S.size()>max_height){
            max_height=S.size();
            ans_vertex=S.top();
        }
        //printf("%d %d %d\n",S.top(),S.size(),max_height);
        if(!flag)
            S.pop();
    }
    /* the distance of the farthest node will be maximum height of the stack-1.*/
    return make_pair(ans_vertex,max_height-1);
}
int main(){
    int e; /* the number edges*/
    scanf("%d\n",&e);
    int x,y;
    /* set the visited array to false*/
    for(int i=0;i<MAX;i++)
        visited[i]=false;
    for(int i=0;i<e;i++){
        scanf("%d %d",&x,&y);
        G[x].push_back(y);
        G[y].push_back(x);
    }
    pair < int ,int > B,C;
    B = DFS(0);
    for(int i=0;i<MAX;i++)
        visited[i]=false;
    C = DFS(B.first);
    printf("diameter is %d\n",C.second);
    return 0;
}
