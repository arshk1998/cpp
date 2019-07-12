//Program to find largest of n numbers using different control structures and classes.
#include<iostream>
using namespace std;
class largest
{
	int n, a[30];
	public:
		void getdata();
		int biggest();
		void result();
};
void largest :: getdata()
{
	cout<<"Enter how many numbers ?";
	cin>>n;
	cout<<"\nEnter "<<n<<" numbers\n";
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	cout<<endl;
	}			
}
int largest::biggest()
{
	int big=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>big)
		big=a[i];
	}
	return(big);
}
void largest::result()
{
	cout<<"\nLargest "<<biggest();
}
int main()
{
	largest l;
	l.getdata();
	l.result();
	return 0;
}
