//Program to add , subtract, multiply and divide two numbers.
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"\n1.Addition \n2.Subtraction\n3.Multiplication\n4.Division";
	int ch;
	cout<<"\n Enter your choice:";
	int c;
	cin>>ch;
	switch(ch)
	{
		case 1:
			c=a+b;
			cout<<"Sum ="<<c;
			break;
		case 2:
			c=a-b;
			cout<<"Subtraction = "<<c;
			break;
		case 3:
			c=a*b;
			cout<<"Multiplication = "<<c;
			break;
		case 4:
			cout<<"Division ="<<(float)a/b;
			break;
			default :cout<<"Invalid choice";
	}return 0;
}
