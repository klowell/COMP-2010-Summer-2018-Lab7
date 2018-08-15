/*****************************************************************************************
Project Name: Lab 7
Name: Kristopher Lowell
Date Completed: 8/13/2018
Purpose: Using polymorphism and inheritance, create classes to deal with different types
of sales.
*****************************************************************************************/

#include <iostream>
#include <string>
#include "Sale.h"

using namespace std;

int main(int argc, char* argv[])
{
	OnlineSale OS;
	WholesaleStoreSale WSS;
	RetailStoreSale RSS;

	string name;
	double price;

	cout << "Enter a name for the Online Sale Product: ";
	getline(cin, name);
	OS.setProduct(name);

	cout << "Enter a price for the Online Sale product: ";
	cin >> price;
	OS.setPrice(price);
	cin.ignore(INT8_MAX, '\n');

	cout << "Enter the address for the Online Sale: ";
	getline(cin, name);
	OS.setAddress(name);

	cout << endl;
	cout << "Enter a name for the Wholesale Store Sale Product: ";
	getline(cin, name);
	WSS.setProduct(name);

	cout << "Enter a price for the Wholesale Store Sale product: ";
	getline(cin, name);
	WSS.setPrice(price);

	cout << endl;
	cout << "Enter a name for the Retail Store Sale Product: ";
	getline(cin, name);
	RSS.setProduct(name);

	cout << "Enter a price for the Retail Store Sale product: ";
	cin >> price;
	RSS.setPrice(price);

	cout.setf(ios_base::fixed);
	cout.precision(2);

	cout << endl << "Online Sale:" << endl;
	cout << "Name: " << OS.getProduct() << endl;
	cout << "Price: " << OS.getPrice() << endl;
	cout << "Tax: " << OS.calculateTax() << endl;
	cout << "Total: " << OS.bill() << endl;
	cout << endl;

	cout << endl << "Wholesale Store Sale:" << endl;
	cout << "Name: " << WSS.getProduct() << endl;
	cout << "Price: " << WSS.getPrice() << endl;
	cout << "Tax: " << WSS.calculateTax() << endl;
	cout << "Discounted Price: " << WSS.calculateDiscountedValue() << endl;
	cout << "Discounted Tax: " << WSS.calculateDiscountedTax() << endl;
	cout << "Total: " << WSS.bill() << endl;
	cout << endl;

	cout << endl << "Retail Store Sale:" << endl;
	cout << "Name: " << RSS.getProduct() << endl;
	cout << "Price: " << RSS.getPrice() << endl;
	cout << "Tax: " << RSS.calculateTax() << endl;
	cout << "Discounted Price: " << RSS.calculateDiscountedValue() << endl;
	cout << "Discounted Tax: " << RSS.calculateDiscountedTax() << endl;
	cout << "Total: " << RSS.bill() << endl;
	cout << endl;

	return 0;
}