//Program to demonstrate how a friend function acts as a bridge between two classes.
#include<iostream>
using namespace std;
class yyy;
class xxx
{
	private:
		int x;
		public:
	xxx(int xx)
	{
		x=xx;
	}	
	friend void f1(xxx,yyy); //Friend function decalaration
	
};
class yyy
{
	private:
		int y;
	public:
		yyy(int yy)
		{
			y=yy;
		}
		friend void f1(xxx,yyy);//Friend function declaration
};
void f1(xxx objx, yyy objy)
{
	cout<<"Difference = "<<objx.x-objy.y;
}
int main()
{
	xxx ob1(10);
	yyy ob2(5);
	f1(ob1,ob2);//friend function call
	return 0;
}
