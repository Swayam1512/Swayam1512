#include<iostream>
using namespace std;
class now 
{
	public:
		now(int roll,float score):
			rollnumber(roll), marks(score)
			{
				cout<<"parameterized consutor"<<endl;
			}
		now(const now& other):
		rollnumber(other.rollnumber),
		marks(other.marks)
			{
				cout<<"copy consturtor"<<endl;
			}
		void displayInfo()
			{
				cout<<rollnumber<<"marks:"<<marks<<endl;
			}

	private:
		int rollnumber; 
		float marks;
};
	int main()
	{
	now nowOriginal(87,12.3);
	now nowCopy(nowOriginal);
	nowOriginal.displayInfo();
	nowCopy.displayInfo();
	return 0;
	}
