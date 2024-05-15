#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream obj("timetable 2.txt");
	obj<<"This is file";
	cout<<"Read this file";
	obj.close();
	return 0;
}
