/*****************************************************************************************
Project Name: Lab 7
Name: Kristopher Lowell
Date Completed: 8/13/2018
Purpose: 
*****************************************************************************************/

#include <iostream>
#include <string>
#include "Sale.h"

using namespace std;

int main (int argc, char* argv[])
{
	Sale *test;
	OnlineSale obj;
	test = &obj;

	string name;
	double price;

	cout << "Enter a name for the product: ";
	cin >> name;
	test->setProduct(name);

	cout << "Enter a price for the product: ";
	cin >> price;
	test->setPrice(price);

	return 0;
}