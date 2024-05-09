#include<iostream>
using namespace std;
class Sum
{
	private:
		int boop,swpd;
		public:
			Sum(int b=0, int s=0)
			{
				boop=b;
				swpd=s;
			}
			Sum operator*(Sum const& obj)
			{
				Sum sub;
				sub.boop = boop*obj.boop;
				sub.swpd = swpd*obj.swpd;
				return sub;
			}
			void print(){cout<<boop<<"*i"<<swpd<<endl;}
};
int main()
{
	Sum s1(5,4),s2(2,10),s3;
	s3=s1*s2;
	s3.print();
	return 0;
}
