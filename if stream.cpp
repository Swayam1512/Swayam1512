#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream obj("timetable 2.txt");
	obj<<"This is file";
	cout<<"Read this file"<<endl;
	obj.close();
	
	ifstream obj2("timetable 2.txt");
	obj2.close();
	return 0;
}
