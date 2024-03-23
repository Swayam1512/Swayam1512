#include <iostream>
using namespace std;
class MyClass 
{

	private:
		int x;

	public:
		MyClass(int a) 
    {
        x = a;
    }
 	
	 friend class MyFriendClass;

	};
	class MyFriendClass {

	public:

    	void printX(MyClass obj) 
	{
        cout << "The value of x is: " << obj.x << endl;
    	}

	};
	int main() 
	{

  	  MyClass obj(10);
  	  MyFriendClass friendObj;
  	  friendObj.printX(obj); 
 		return 0;
	}

