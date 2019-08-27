// the goal of this program is to calculate the tax and tip of a resturant bill.

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float bill = 88.67;
	float tax = .0675;
	float tip = .20;
	float taxTotal;
	float tipTotal;
	taxTotal = bill * tax;
	tipTotal = (bill + taxTotal)*tip;
	cout << setprecision(2) << fixed;
	cout << "The cost of the meal is " << bill << endl;
	cout << "The tax is " << taxTotal << endl;
	cout << "The tip is " << tipTotal << endl;
	cout << "The total bill is " << bill + taxTotal + tipTotal << endl;
	



	system("PAUSE");
	return 0; 
}