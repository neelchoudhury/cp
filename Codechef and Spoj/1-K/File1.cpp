#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("1.txt");
	fout<<3<<" "<<5<<endl;
	fout<<"Maybe_this is bullshit"<<endl;
	fout.close();
	ifstream fin;
	fin.open("1.txt");
	int x,y;
	fin>>x>>y;
	char a[17];
	fin>>a;
	cout<<x<<" "<<y<<endl;
	cout<<a<<endl;
	return 0;
}
