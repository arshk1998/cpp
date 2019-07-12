//Program to enter numbers using array and display odd and even numbers from list separately.
#include <iostream>
using namespace std;
int main()
{
    	int array[100], i, num,even=0,odd=0;
 
    	cout<<"Enter the size of an array \n";
    	cin>>num;
    	
    	cout<<"Enter the elements of the array \n";
    	for (i = 0; i < num; i++)
    	{
            
            cin>>array[i];
        }
        cout<<"Even numbers in the array are : ";
        for (i = 0; i < num; i++)
        {
            if (array[i] % 2 == 0)
            {
	            even++;
                
                cout<<endl;
                cout<<array[i];   
            }
        }
        cout<<"\nOdd numbers in the array are: ";
        for (i = 0; i < num; i++)
        {
            if (array[i] % 2 != 0)
            {
	            odd++;
	            cout<<endl;
                cout<<array[i];
            }
        }
         cout<<"\nThere are "<<even<<" numbers and "<<odd<<" odd numbers out "<<num<<" given numbers.";
		return 0;
}
