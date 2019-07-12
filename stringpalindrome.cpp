//Program to check whether a string is in pallindrome?
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[50],c[50];
	cout<<"Enter a string :";
	cin.get(a,80);     //inputs string
	strcpy(c,a);               // copying string a in string c
	strrev(a);                       //reverse  string a
	if(strcmp(c,a)==0)
	{
		cout<<"String= "<<c<<" is in pallindrome";
	}
	else
	{
		cout<<c<<" is not in pallindrome";
	}
	return 0;
	
	
	
}
