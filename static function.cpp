#include<iostream>
using namespace std;
class member
{
	private:
		static int A;
			static int B;
				static int C;
		
		public:
			static void disp()
			{
				cout<<"value of the A is:"<<A<<endl;
					cout<<"value of the B is:"<<B<<endl;
						cout<<"value of the C is:"<<C<<endl;
			}
		};
			int member::A = 20;
				int member::B = 30;
					int member::C = 40;
			
			int main()
				{
					member mb;
						cout<<"print the static member through object.Name: "<<endl;
							mb.disp();
								cout<<"print the static member through class.name: "<<endl;
									member::disp();
										return 0;
						}
