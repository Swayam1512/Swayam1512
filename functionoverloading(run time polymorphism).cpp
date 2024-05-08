#include<iostream>
using namespace std;
class Car
{
	public:
		void car(string x)
		{
			cout<<x<<endl;
		}
		void car(string x,string y)
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	Car c;
	c.car("supra");
	c.car("fortuner");
	return 0;
}

