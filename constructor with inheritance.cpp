#include<iostream>
using namespace std;
class A
{
	public:
	A()
		{
			cout<<"Computer engineer"<<endl;
		}
};
class B: public A
{
	public:
		 B()
		{
			cout<<"Civil engineer"<<endl;
		}
};
int main()
{
	B obj;
	return 0;
}
