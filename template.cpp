//Program to calculate the average of n numbers of any data type using templates.
#include<iostream>
using namespace std;
template <class T>
float avg(T x[],int num)
{
	float avg,sum=0;
	for(int i=0;i<num;i++)
	{
		sum=sum+x[i];
	}
		avg=sum/num;
		return(avg);
}
int main()
{
	int n,a[10];
	cout<<"*********INTEGER ELEMENTS*********\n";
	cout<<"Enter number of elements =";
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>a[j];
	}
	cout<<"Average of int values: "<<avg(a,n);
	float a1[10];
	cout<<"********FLOAT ELEMENTS*****\n";
		cout<<"Enter number of elements =";
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>a1[j];
	}
	cout<<"Average of  float values: "<<avg(a1,n);
	return 0;	
}
