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
class B:public A
{
	public:
			void child1()
		{
			cout<<"child class 1"<<endl;	
		}
};
class C:public B
{
	public:
			void child2()
		{
			cout<<"child class 2"<<endl;	
		}
};
int main()
{
		C obj;
	
	obj.parent();
	obj.child1();
	obj.child2();
	return 0;
}
