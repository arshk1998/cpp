//Program to display basic salary and house rent of a employee using default constructor
#include<iostream>

using namespace std;
#include<string.h>
class employee
{
	char name[20];
	int basic,hra;
	public:
		employee()
		{
			strcpy(name,"Ms. Arshdeep");
			basic=10000;
			hra=1500;
		}
		void display();
		
};
void employee::display()
{
	cout<<"Name "<<name<<endl;
	cout<<"Basic "<<basic<<endl;
	cout<<"House rent "<<hra;
}
int main()
{
	employee E;
	E.display();
	return 0;
}
