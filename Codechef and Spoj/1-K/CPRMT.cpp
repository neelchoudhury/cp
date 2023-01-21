#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld\n",a)
#define MOD 1000000007
 
using namespace std;

char s1[1010];
char s2[1010];
char s3[1010];

int main()
{
	ll l1=0,l2=0;
	while((cin>>s1))
	{
		cin>>s2;
		l1=strlen(s1);
		l2=strlen(s2);
		sort(s1,s1+l1);
		sort(s2,s2+l2);
		int i=0,j=0;
		int k=0;
		//cout<<"hwbfhwf"<<endl;
		for(; i<l1 and j<l2; )
		{
			if(s1[i]==s2[j])
			{
				//cout<<"   jagf"<<endl;
				s3[k++]=s1[i];
				i++;
				j++;
			}
			else if(s1[i]>s2[j])
			{
				j++;
			}
			else if(s1[i]<s2[j])
			{
				i++;
			}
		}
		//cout<<s3<<" sdsvsdv"<<endl;
		for(int i=0; i<k; i++)
			cout<<s3[i];
		cout<<endl;
	}
	return 0;
}
