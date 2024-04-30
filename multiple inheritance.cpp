#include<iostream>
using namespace std;
class A
{
	public:
		void parent()
		{
			cout<<"Parent class"<<endl;	
		}
};
class B
{
	public:
			void parent2()
		{
			cout<<"parent class 2"<<endl;	
		}
};
class C:public A,public B
{
	public:
			void child()
		{
			cout<<"child class"<<endl;	
		}
};
int main()
{
	C obj;
	
	obj.parent();
	obj.parent2();
	obj.child();
	return 0;
}
