//Program to calculate transpose of matrix
#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],m,n;
	cout<<"Enter the rows and columns of A";
	cin>>m>>n;
	cout<<"Enter array elements\n";
	for(int i=0;i<m;i++)                 //input array
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
		for(int i=0;i<n;i++)                 //transpose
	{
		for(int j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
		}
	}
		for(int i=0;i<n;i++)                 //output array
	{
		for(int j=0;j<m;j++)
		{
			cout<<b[i][j]<<"   " ;
		}
		cout<<"\n";
	}
	return 0;
}

