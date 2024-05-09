#include<iostream>
using namespace std;
class student
{
	public:
	virtual void meet()
	{
		cout<<"Engineer 1"<<endl;
	}
};
class student1: public student
{
	public:
		void shubham()
		{
			cout<<"Engineer 2"<<endl;
		}
};
int main()
{
	student s1;
	s1.meet();
	return 0;
}
