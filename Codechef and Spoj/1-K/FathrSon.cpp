#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#define ll long long int

using namespace std;

int main()
{
	char s[100000];
	scanf("%s", s);
	ll q,a,b;
	ll len=0;
	len=strlen(s);
	//cout<<len<<endl;
	scanf("%lld", &q);
	//cout<<" q "<<q<<endl;
	while(q--)
	{
		//cout<<"Entered while loop "<<endl;
		scanf("%lld%lld", &a,&b);
		//cout<<a<<" "<<b;
		ll lena=0,lenb=0;
		ll i,j;
		for(i=0;lena<a; i++ )
			lena=pow(len,i);
		for(j=0; lenb<b; j++)
			lenb=pow(len,j);
		
		for(ll k=i;a>=len;)
		{
			lena=pow(len,k);
			if(a>lena)
				a-=lena;
			else
				k--;
		}
		for(ll k=j;b>=len;)
		{
			lenb=pow(len,k);
			if(b>lenb)
				b-=lenb;
			else
				k--;
		}
	
		//cout<<a<<" "<<b<<endl;
		if(s[b-1]==s[a-1])
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
