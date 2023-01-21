#include<iostream>
#include<cstdio>
#include<string>
#define ll long long int

using namespace std;

struct poly
{
	int x;
	char c;
};

int main()
{
	struct poly s[26];
	s[0].c='A';
	s[0].x=11;
	s[1].c='B';
	s[1].x=12;
	s[2].c='C';
	s[2].x=13;
	s[3].c='D';
	s[3].x=14;
	s[4].c='E';
	s[4].x=15;
	s[5].c='F';
	s[5].x=21;
	s[6].c='G';
	s[6].x=22;
	s[7].c='H';
	s[7].x=23;
	s[8].c='I';
	s[8].x=24;
	s[9].c='J';
	s[9].x=24;
	s[10].c='K';
	s[10].x=25;
	s[11].c='L';
	s[11].x=31;
	s[12].c='M';
	s[12].x=32;
	s[13].c='N';
	s[13].x=33;
	s[14].c='O';
	s[14].x=34;
	s[15].c='P';
	s[15].x=35;
	s[16].c='Q';
	s[16].x=41;
	s[17].c='R';
	s[17].x=42;
	s[18].c='S';
	s[18].x=43;
	s[19].c='T';
	s[19].x=44;
	s[20].c='U';
	s[20].x=45;
	s[21].c='V';
	s[21].x=51;
	s[22].c='W';
	s[22].x=52;
	s[23].c='X';
	s[23].x=53;
	s[24].c='Y';
	s[24].x=54;
	s[25].c='Z';
	s[25].x=55;
	ll n;
	string a;
	//scanf("%lld", &n);
	cin>>n;
	n+=1;
	while(n--)
	{
		//scanf("%s",a);
		getline(cin,a);
		for(ll i=0; a[i]!='\0'; i++)
		{
			for(int j=0;j<26;j++)
			{
			 	if(a[i]==s[j].c)
			 		cout<<s[j].x<<" ";
			}
		}
		
		cout<<endl;
	}
	return 0;
}
