/*****************************************************************************************
Project Name: Lab 7
Name: Kristopher Lowell
Date Completed: 8/13/2018
Purpose:
*****************************************************************************************/
#ifndef SALE_H
#define SALE_H

#include <string>

using namespace std;

class Sale
{
public:
	Sale() { price = 0.00; };
	~Sale() { };

	void setProduct(string productVal) { product = productVal; };
	void setPrice(double priceVal) { price = priceVal; };

	string getProduct() { return product; };
	double getPrice() { return price; };

	virtual double bill() { return price; };
	virtual double calculateTax(double taxRate) { return price * taxRate; };

private:
	string product;
	double price;
};
#endif