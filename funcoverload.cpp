//	Program to compute sum of numbers of different datatype using FUNCTION OVERLOADING.
#include<iostream>
using namespace std;
void sum(int,int);
void sum(double, double);
void sum(char, char);
int main()
{
	//clrscr();
	int a=10, b=20;
	double c=7.52, d=8.14;
	char e='A', f='B';
	sum(a,b); //calls sum(intx, int y)
	sum(c,d); //calls sum (double x, double y)
	sum(e,f); //calls sum(charx, char y)
	return 0;
	}
	void sum(int x, int y)
	{
		cout<<"\nsum of two integer numbers = "<<x+y;
	}
	void sum(double x,double y)
	{
		cout<<"\nsum of two floating numbers = "<<x+y;
    }
    void sum(char x, char y)
    {
    	cout<<"\nsum of two characters = "<<x+y;
	}
