#include<iostream>
using namespace std;
class child
{
	public:
		void parent()
		{
			cout<<"parent class"<<endl;
		}
};
class B:public child
{
	public:
		void child()
		{
			cout<<"child class"<<endl;
		}
};
int main()
{
	B obj;
	obj.parent();
	obj.child();
	return 0;
}

