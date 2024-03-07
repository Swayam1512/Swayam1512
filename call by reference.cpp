#include<iostream>
using namespace std;
void increment(int &a)
{
	a++;
}
int main()
{
	int num=7;
	increment(num);
	cout<<"Modified value:-"<<num;
	return 0;
}
