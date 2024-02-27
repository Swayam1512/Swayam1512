#include<iostream>
 using namespace std;
 int main()
 {
 	int a,b;
 	cout<<"enter the values of a & b:";
 	cin>>a>>b;
 	int bitwise_and=a&b;
 	int bitwise_or=a|b;
 	int bitwise_xor=a^b;
 	int bitwise_not=~a;
 	int bitwise_leftshift=a<<2;
 	int bitwise_rightshift=a<<2;
 	cout<<"AND:"<<bitwise_and<<endl;
 	cout<<"OR:"<<bitwise_or<<endl;
	cout<<"XOR:"<<bitwise_xor<<endl; 
 	cout<<"NOT:"<<bitwise_not<<endl;
 	cout<<"LEFTSHIFT:"<<bitwise_leftshift<<endl;
	cout<<"RIGHTSHIFT:"<<bitwise_rightshift<<endl;
 	return 0;
 }
 
