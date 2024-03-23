#include<iostream>
#include<string>
using namespace std;
class car
{
	public:
		
		string brand;
		string model;
		string price;
		
		void dispoutput()
		{
			cout<<"BRAND : "<<brand<<endl;
			cout<<"MODEL : "<<model<<endl;
			cout<<"PRICE : "<<price<<endl;
		}
};
	int main()
	{
		car c1;
		c1.brand="toyota";
		c1.model="toyota";
		c1.price="80";	
		c1.dispoutput();
		return 0;
	}

