#include<iostream>
using namespace std;
int fun()
{
	int a,b;
	cout<<"Enter the value of a & b";
	cin>>a>>b;
	if(a>b)
	cout<<"a is greater than b";
	else
	cout<<"b is greater than a";
}
int main()
{
	fun();
	return 0;
}
