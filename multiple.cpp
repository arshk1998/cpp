//Program to implement multiple inheritance to calculate total revenue generated from the sales of books
#include<iostream>
using namespace std;
class publication
{
	private:
		char publisher[20];
	protected:
		double price;
	public:
		void read()
		{
			cout<<"Enter publisher and price : ";
			cin>>publisher>>price;	
		}	
		void show()
		{
			cout<<"\nPublisher = "<<publisher;
			cout<<"\nPrice = "<<price;
		}
};
class sales
{
	protected:
		double pub_sales;
	public:
		void read()
		{
			cout<<"\nEnter total sales =";
			cin>>pub_sales;
		}
	void show()
	{
		cout<<"\nTotal sales of publication ="<<pub_sales;
	}
	
};
class book : public publication,public sales
{
	char author[20];
	long isbn;
	int pages;
	public:
		void read()
		{
			cout<<"\nEnter author,isbn number,pages :";
			cin>>author>>isbn>>pages;
		}
		void show()
		{
			cout<<"\nBook info: "<<author<<'\t'<<isbn<<'\t'<<pages;
		}
		void cal_sal_amt()
		{
			double saleamt;
			saleamt=price*pub_sales;
			cout<<"Sale amount= "<<saleamt;
		}
};
int main()
{
	book b1;
	cout<<"Enter publication information..\n";
	b1.publication::read();
	cout<<"\nEnter sales information..";
	b1.sales::read();
	cout<<"Enter book information..";
	b1.read();
	b1.cal_sal_amt();
	b1.publication::show();
	b1.sales::show();
	b1.show();
	return 0;
}
