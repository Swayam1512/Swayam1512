#include<iostream>
 using namespace std;
 int a=6;
 int main()
 {
 	int a=27;
 	cout<<"\nthe local value is:"<<a;
	cout<<"\nthe globle value is:"<<::a;
	return 0;
 }
