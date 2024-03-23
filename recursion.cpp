#include<iostream>
 using namespace std;
 int factorial(int n)
 {
 	if(n<=1)
 	{
	 	return 1;
		}
	else
	{
		return n*factorial(n-1);
		}
 }
	int main()
	{
		int num;
		cout<<"enter tha value for num:";
		cin>>num;
		factorial(num);
		cout<<"the factorial is:"<<factorial(num)<<endl;
 		return 0;
	}

