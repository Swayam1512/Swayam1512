#include<iostream>
using namespace std;
class student
{
	private:
		int a=5;
		int b=7;
		public:
			student()
			{
				cout<<"Subtraction is:-"<<(a-b)<<endl;
			}
			~student()
			{
				cout<<"Multiplication is:-"<<(a*b)<<endl;
			}
			void student1()
			{
				cout<<a*b<<endl;
			}
};
int main()
{
	student info;
	info.student1();
}

