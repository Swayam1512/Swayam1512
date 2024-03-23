#include<iostream>
#include<string>
using namespace std;
class Student
{		
	public:
		string name;
		int rollNumber;
		float marks;
	
	void dispInfo()
	{
		cout<<"Roll Number: "<<rollNumber<<endl;	
			cout<<"Name: "<<name<<endl;
				cout<<"Marks: "<<marks<<endl;
		}
		private:
			void calculateGrade();
			
	};
		void Student::calculateGrade()
		{
			if (marks >= 75.0)
			{
				cout<<"Grade: A"<<endl;
			}
			else if (marks >= 60.0)
			{
				 cout<<"Grsde: B"<<endl;
			}
			else
			{
				cout<<"Grade: C"<<endl;
			}
		}
	int main()
	{
		Student student1;
		
		student1.rollNumber = 2;
		student1.name = "Jatan chudasama";
		student1.marks = 84.4;
		
		cout<<"Student Informatin:"<<endl;
		student1.dispInfo();
		
		return 0;
	}

