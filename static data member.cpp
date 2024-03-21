#include<iostream>
using namespace std;
class car
{
	private:
		int car_ID;
			char car_name[20];
				double price;
		
		public:
			
			static int static_member;
			
			car()
				{
					static_member++;
				}
			
			void inp()			
				{
					cout<<"\nEnter the ID of the car"<<endl;
						cin>>car_ID;
						cout<<"Enter the NAME of the car"<<endl;
							cin>>car_name;
							cout<<"Enter the price of the car"<<endl;
								cin>>price;
				}
			void disp()
			{
					cout<<"ID of the car: "<<car_ID<<endl;
					cout<<"name of the car: "<<car_name<<endl;
					cout<<"price of the car: "<<price<<endl;
			}
		};
		
		int car::static_member=0;
		
		int main()
		{
			car c1;
			c1.inp();
			c1.disp();
			
			car c2;
			c2.inp();
			c2.disp();
			
			cout<<"no. of objects created in class";
				car::static_member;
			
				return 0;
		}

