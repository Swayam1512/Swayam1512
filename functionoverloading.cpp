#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}
int sum(int a, int b, int c)
{
	return a+b+c;
}
int main()
{	
	cout<<"Addition is:"<<sum(5,7)<<endl;
	cout<<"Addition is:"<<sum(5,7,3)<<endl;
return 0;
}
