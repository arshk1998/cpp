//Program to show default, parameterised and copy constructor
#include<iostream>
using namespace std;
class consts
{
	int id;
	public:
	consts()               //default constructor
	{
		id=0;
		cout<<"Id initalised in default "<<id;
	}
	consts(int a)            //parametrised constructor
	{
		id=a;
	}
	consts(consts &x)            //copy constructor
	{
		id=x.id;
	}
	void display()
	{
		cout<<id<<endl;
	}
};
int main()
{
consts();
consts a(100);
consts b(a);
consts c=a;
//consts =d;
//d=a;
cout<<"\nId of a";
a.display();
cout<<"\nId of b";
b.display();
cout<<"\nId of c";
c.display();
//cout<<"\nId of d";
//d.display();
return 0;
}
