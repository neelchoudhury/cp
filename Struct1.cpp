#include<iostream>
#include<string.h>

using namespace std;

struct student{
	int admn;
	char name[20];
	float marks;
};

int main()
{
	struct student s1;
	s1.admn=3543;
	cout<<s1.admn<<endl;
	strcpy(s1.name,"Gandhi");
	s1.marks=97.5;
	cout<<s1.name<<" "<<s1.marks<<endl;
	cout<<endl<<endl;
	struct student s[5];
	for(int i=0; i<3; i++)
	{
		cin>>s[i].admn;
		cin>>s[i].name;
		cin>>s[i].marks;
	}
		for(int i=0; i<3; i++)
	{
		cout<<s[i].admn<<endl;
		cout<<s[i].name<<endl;
		cout<<s[i].marks<<endl;
	}
	return 0;
	
}
