#include<iostream>
using namespace std;
int factorial(int a)
{
	if(a==1 || a==0)
	{
		return 1;
	}
	else
	return a*factorial(a-1);
}
int main()
{
	int num=5;
	cout<<"Factorial of "<<num<<"is:"<<factorial(num)<<endl;
	return 0;
}
