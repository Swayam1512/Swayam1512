#include<iostream>
using namespace std;
class car
{
	public:
			void display()
			{
			cout<<"Ferrari"<<endl;
		    }
};
class car1: public car
{
	public:
		void display1()
		{
			cout<<"Supra"<<endl;
		}
};
class car2: virtual public car, public car1
{
};
int main()
{
	car2 obj;
	obj.display1();
	return 0;
}
