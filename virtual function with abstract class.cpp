#include<iostream>
using namespace std;
class shape
{
	public:
		int circle;
		virtual void fun()=0; 
};
class triangle: public shape
{
	public:
		void fun()
		{
		cout<<"The value is:-"<<endl;
}
};
int main()
{
	triangle obj;
	obj.fun();
	return 0;
}
