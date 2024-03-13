#include<iostream>
using namespace std;
struct student
{
    string name;
	int rollno;
	float SPI;
};
int main()
{
	student student1;
{	
	student1.name="aa";
	student1.rollno=1;
	student1.SPI=88.69;
}
	cout<<"Student Information"<<endl;
	cout<<"Name:"<<student1.name<<endl;
	cout<<"Roll no.:"<<student1.rollno<<endl;
	cout<<"SPI:"<<student1.SPI<<endl;
	return 0;
}

