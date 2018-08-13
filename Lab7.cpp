/*****************************************************************************************
Project Name: Lab 7
Name: Kristopher Lowell
Date Completed: 8/13/2018
Purpose:
*****************************************************************************************/

#include <iostream>
#include <string>
#include "OnlineSale.h"
#include "WholesaleStoreSale.h"
#include "RetailStoreSale.h"

using namespace std;

int main(int argc, char* argv[])
{
	WholesaleStoreSale WSS;

	string name;
	double price;

	cout << "Enter a name for the product: ";
	cin >> name;
	WSS.setProduct(name);

	cout << "Enter a price for the product: ";
	cin >> price;
	WSS.setPrice(price);

	cout << endl;
	cout << "Name: " << WSS.getProduct() << endl;
	cout << "Price: " << WSS.getPrice() << endl;
	cout << "Tax: " << WSS.calculateTax() << endl;
	cout << "Discounted Price: " << WSS.calculateDiscountedValue() << endl;
	cout << "Discounted Tax: " << WSS.calculateTax() << endl;
	cout << "Total: " << WSS.bill() << endl;
	cout << endl;

	system("PAUSE");

	return 0;
}