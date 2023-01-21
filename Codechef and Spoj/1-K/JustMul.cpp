#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#define ll long long int

using namespace std;

int main()
{
	int t;
	ll M;
	char s[10000];
	cin>>t;
	char a[2],b[2];
	while(t--)
	{
		scanf("%lld%s",&M, s);
		ll l=strlen(s);
		//cout<<M<<endl;
		
		a[0]=s[0];
		b[0]=s[3];
		ll p=((int)(pow(atoi(a),atoi(b))))%M;
		//cout<<"t= "<<t<<" "<<s[0]<<" "<<s[3]<<endl;
		//cout<<s[0]*s[3]<<endl;
	//	cout<<(pow(((int)s[0]),((int)s[3])))<<endl;
		//cout<<p<<endl;
		ll i=4;
		while(i<l)
		{
			a[0]=s[i+1];
			b[0]=s[i+4];
			p=(p*(int)(pow(atoi(a),atoi(b)))%M)%M;
			i=i+5;
		}
		printf("%lld\n",p);
	}
	return 0;
}

