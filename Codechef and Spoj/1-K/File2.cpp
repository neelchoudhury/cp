#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("File2.cpp");
	char a[20];
	fin>>a;
	cout<<a<<endl;
	return 0;
}

