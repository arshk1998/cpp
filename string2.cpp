//Program to count number of vowels, consonants,  digits ,spaces  and other characters typed.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[80],c;
	int v=0,co=0,digit=0,sp=0,oth=0;
	cout<<"Enter a line :";
	cin.get(a,80);
	for( int i=0;a[i]!='\0';i++)
	{
		c=toupper(a[i]);
		if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		{
			++v;
		}
		else if(c>='A'&&c<='Z')
		{
			++co;	
		}
		else if(c>='0'&&c<='9')
		{
			++digit;
		}
		else if(c==' '||c=='\t')
		{
			++sp;
		}
		else
		++oth;
	}
	cout<<"Vowels= "<<v;
	cout<<"\nConsonants = "<<co;
	cout<<"\nDigits = "<<digit;
	cout<<"\nSpaces = "<<sp;
	cout<<"\nOthers = "<<oth;
	return 0;
}
