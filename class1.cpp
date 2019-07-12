//Program to calculate area of rectangle using classes and objects.
#include<iostream>
using namespace std;
class rectangle
{
	private:
		int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
	void area()
	{
		int ar=a*b;
		cout<<"\nArea of rectangle="<<ar;	
	}
};
int main()
{
	rectangle r1,r2;
	r1.setdata(5,10);    //object r1 calls setdata()
	cout<<"Rectangle 1";
	r1.area();             // object r1 calls area()
	r2.setdata(10,20);     //object r2 calls setdata()
	cout<<"\nRectangle 2";
	r2.area();
	return 0;
}
