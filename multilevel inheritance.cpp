#include<iostream>
using namespace std;
class Swayam
{
	public:
		void engineer()
		{
			cout<<"computer engineer 1"<<endl;	
		}
};
class Meet:public Swayam
{
	public:
			void engineer2()
		{
			cout<<"computer engineer 2"<<endl;	
		}
};
class Shubham:public Meet
{
	public:
			void engineer3()
		{
			cout<<"computer engineer 3"<<endl;	
		}
};
int main()
{
	Shubham obj;
	obj.engineer();
	obj.engineer2();
	obj.engineer3();
	return 0;
}



