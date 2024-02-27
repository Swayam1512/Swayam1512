#include<iostream>
 using namespace std;
 int main()
 {
	enum week {mon,tue,wed,thur,fri,sat,sun};
	week day=wed;
	
	switch (day)
	{
		case mon:
		cout<<"monday";
		break;
		case tue:
		cout<<"\ntuesday";
		break;
		case wed:
		cout<<"\nwednesday";
		break;
		case thur:
		cout<<"\nthursday";
		break;
		case fri:
		cout<<"\nfriday";
		break;
		case sat:
		cout<<"\nsaturday";
		break;
		case sun:
		cout<<"\nsunday";
		break;
	}
		return 0;
 }
       
