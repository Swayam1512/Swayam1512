#include<iostream>
using namespace std;
class wall
{
		private:
		double length;
		double height;
		public:
			wall(double len,double hgt)
{
		length=len;
		height=hgt;
}
double calculateArea()
{
	return length*height;
}
};
int main()
{
	wall wall1(5.6,6.4);
	wall wall2(9.6,7.8);
	cout<<"Area of wall 1:-"<<wall1.calculateArea()<<endl;
	cout<<"Area of wall 2:-"<<wall2.calculateArea()<<endl;
	return 0;
}
