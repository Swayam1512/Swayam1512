#include<iostream>
using namespace std;
class Employee
{
	private:
		int id;
		string name;
		float salary;
		public:
	Employee(int i, string n, float s): id(i), name(n), salary(s){}
	
void display()
{
	cout<<"Id:-"<<this ->id<<endl<<"Name:-"<<this ->name<<endl<<"Salary:-"<<this ->salary<<endl;
}
};
int main()
{
	Employee e1(2,"Swayam",50000);
	e1.display();
	return 0;
}
