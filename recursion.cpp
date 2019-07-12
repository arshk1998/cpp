//"	Program to calculate factorial of a number using recursion.
#include<iostream>
using namespace std;
int main()
{
	int factorial(int);
	int x,fact;
	cout<<"\nEnter a number= ";
	cin>>x;
	fact=factorial(x);
	cout<<"\nFactorial of "<<x<<"="<<fact;
	return 0;
}
int factorial(int a)
{
	int b;
	if(a==1)
	return(1);
	else
	b=a*factorial(a-1);
	return(b);
}
