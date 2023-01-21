#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
 
using namespace std;

char a[200010];

vector<ll> v[28];
vector<ll> v1,v2;

int main()
{
	//ios;
	for(int i=0; i<26; i++)
		v[i].clear();
	ll n,m;
	cin>>n>>m;
	//scanf("%I64d %I64d", &n, &m);
	scanf("%s", a);
	int len=strlen(a);
	for(int i=0; i<len; i++)
	{
		v[a[i]-'a'].push_back(i);
	}
	char q,w;
	int qq[28];
	mem(qq);
	for(int i=0; i<26; i++)
	{
		 qq[i]=i;
	}
	/*for(int i=0; i<25; i++)
		cout<<qq[i]<<" ";
	cout<<endl;*/
	while(m--)
	{
		cin>>q>>w;
		for(int i=0;i<26; i++)
		{
			if(qq[i]==q-'a')
			{
				qq[i]=w-'a';
			}
			else if(qq[i]==w-'a')
			{
				qq[i]=q-'a';
			}
		}
			
	}
	for(int i=0; i<26; i++)
	{
		for(int j=0; j<v[i].size(); j++)
		{
			//cout<<char(i+'a')<<endl;
			a[v[i][j]]=qq[i]+'a';
		}
	}
	printf("%s\n", a);
	return 0;
}
