#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

bool arr[1010][1010];
vector < ll > G[1000010];
bool visited[1000010];

pair < ll ,ll > DFS(ll A){
    stack < ll > S;
    S.push(A);
    visited[A]=true;
    bool flag ;
    ll max_height=0;
    ll ans_vertex=A;
    ll x;
    while(!S.empty()){
        x = S.top();
        flag = false;
        for(ll i=0;i<G[x].size();i++){
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

int main()
{
	ll t,r,c;
	scanf("%lld", &t);
	while(t--)
	{
		for(ll i=0; i<1000000; i++)
			G[i].clear();
		memset(arr,0,sizeof(arr));
		scanf("%lld %lld",&c, &r);
		char ch;
		for(ll i=0; i<r; i++)
		{
			for(ll j=0; j<c; j++)
			{
				cin>>ch;
				if(ch=='#')
					arr[i][j]=0;
				else
					arr[i][j]=1;
				//cout<<arr[i]<<endl;
			    //if(arr[i][j])
			      //  cout<<i*c+j<<endl;
			}
		}
		for(ll i=0; i<r; i++)
		{
			for(ll j=0; j<c; j++)
			{
				if(arr[i][j])
				{
					if(i-1>=0 and arr[i-1][j])
					{
						G[c*i+j].pb(c*(i-1)+j);
						//G[r*(i-1)+j].pb(r*i+j);
					}
					if(i+1<=r-1 and arr[i+1][j])
					{
						G[c*i+j].pb(c*(i+1)+j);
					//	G[r*(i+1)+j].pb(r*i+j);
					}
					if(j-1>=0 and arr[i][j-1])
					{
						G[c*i+j].pb(c*(i)+j-1);
					//	G[r*i+j-1].pb(r*(i)+j);
					}
					if(j+1<=c-1 and arr[i][j+1])
					{
						G[c*i+j].pb(c*(i)+j+1);
					//	G[r*i+j+1].pb(r*(i)+j);
					}
				}
					
			}
		}
		for(ll i=0; i<r*c; i++)
		{
		    sort(G[i].begin(),G[i].end());
		    //for(ll j=0; j<G[i].size(); j++)
		        //cout<<i<<" "<<G[i][j]<<endl;
		       //cout<<endl;
		}
		pair < ll ,ll > B,C;
		ll i=0,j=0,f=0;
		for( i=0; i<r; i++)
		{
		    for( j=0; j<c; j++)
		    {
		        if(arr[i][j])
		      {
		          f=1;
		          break;
		      }
		    }
		    if(f==1)
		        break;
		}
		for(int i=0;i<1000000;i++)
            visited[i]=false;
   	 	B = DFS(i*c+j);
   	 	for( i=0;i<1000000;i++)
        	visited[i]=false;
    	C = DFS(B.first);
    	printf("Maximum rope length is %lld.\n",C.second);
	}
	return 0;
}
