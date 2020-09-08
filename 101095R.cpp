#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define BIG 100000000

using namespace std; 



string f(string s)
{
	if(s=="Kamen" or s=="Rock" or s=="Pierre" or s=="Stein" or s=="Ko" or s=="Koe" or s=="Sasso" or s=="Roccia" or s=="Guu" or s=="Kamien" or s=="Piedra")
		return "Rock";
	else if(s=="Nuzky" or s=="Scissors" or s=="Ciseaux" or s=="Schere" or s=="Ollo" or s=="Olloo" or s=="Forbice" or s=="Choki" or s=="Nozyce" or s=="Tijera")
		return "Scissors";
	else
		return "Paper";
}

ll gm(string q, string w)
{
	if(q==w)
		return 0;
	else
	{
		if((q=="Rock" and w=="Scissors") or (q=="Scissors" and w=="Paper") or (q=="Paper" and w=="Rock"))
			return 1;
		else	
			return -1;
	}
}

int main()
{
	ios;
	string l1="", l2="", n1="",n2="",w1="",w2="";
	for(int i=1;; i++)
	{
		l1="", l2="", n1="",n2="",w1="",w2="";
		cin>>l1>>n1;
		cin>>l2>>n2;
		cout<<"Game #"<<i<<":"<<endl;
		ll cnt1=0,cnt2=0;
		while(1)
		{
			w1="",w2="";
			cin>>w1; 
			if( w1=="-" or w1==".")
			{
				break;
			}
			else
			{
				cin>>w2;
				w1=f(w1), w2=f(w2);
				ll r=gm(w1,w2);
				if(r==-1)
					cnt2++;
				else if(r==1)
					cnt1++;
			}
			
		}
		cout<<n1<<": "<<cnt1<<" point" ;
		if(cnt1!=1)
			cout<<"s"<<endl;
		else
			cout<<endl;
		cout<<n2<<": "<<cnt2<<" point" ;
		if(cnt2!=1)
			cout<<"s"<<endl;
		else
			cout<<endl;
		if(cnt1>cnt2)
		{
			cout<<"WINNER: "<<n1<<endl;
		}
		else if(cnt2>cnt1)
		{
			cout<<"WINNER: "<<n2<<endl;
		}
		else
			cout<<"TIED GAME"<<endl;
		cout<<endl;
		// cout<<"cinh "<<w2<<endl;
		if(w1=="-")
		{
			continue;
		}
		else if(w1==".")
		{
			break;
		}
	}
	return 0;
}