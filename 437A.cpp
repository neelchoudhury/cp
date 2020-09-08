#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 210
#define K 510
#define N 1010
#define MAX 400010

using namespace std;

int main()
{
	string s1="",s2="",s3="",s4="";
	cin>>s1;
	cin>>s2;
	cin>>s3;
	cin>>s4;
	ll l1=s1.length()-2;
	ll l2=s2.length()-2;
	ll l3=s3.length()-2;
	ll l4=s4.length()-2;
	char ans;
	ll cnt=0;
	// cout<<l1<<" "<<l2<<" "<<l3<<" "<<l4<<endl;
	if(l1>=2*(max(l2,max(l3,l4))))
	{
		ans='A';
		cnt++; 
	}
	if(l2>=2*(max(l1,max(l3,l4))))
	{
		ans='B';
		cnt++; 
	}
	if(l3>=2*(max(l2,max(l1,l4))))
	{
		ans='C';
		cnt++; 
	}
	if(l4>=2*(max(l2,max(l3,l1))))
	{
		ans='D';
		cnt++;
	}
	if(2*l1<=(min(l2,min(l3,l4))))
	{
		ans='A';
		cnt++; 
	}
	if(2*l2<=(min(l1,min(l3,l4))))
	{
		ans='B';
		cnt++; 
	}
	if(2*l3<=(min(l2,min(l1,l4))))
	{
		ans='C';
		cnt++; 
	}
	if(2*l4<=(min(l2,min(l3,l1))))
	{
		ans='D';
		cnt++;
	}
	if(cnt==1)
		cout<<ans<<endl;
	else
		cout<<"C"<<endl;

	return 0;
}