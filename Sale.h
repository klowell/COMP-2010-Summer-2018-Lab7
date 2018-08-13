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

class OnlineSale: public Sale
{
public:
	OnlineSale() { taxRate = 0.10; };
	~OnlineSale() { };

	double calculateTax() { return *this->calculateTax(taxRate); };

private:
	double taxRate;
	string address;
};

class StoreSale: public Sale
{
public:
	StoreSale() { taxRate = 0.20; };
	~StoreSale() { };

	double calculateDiscountedValue() { return this->getPrice() * (1 - discountValue); };
	double calculateTax() { return *this->calculateTax(taxRate); };

private:
	double taxRate;
};

class WholesaleStoreSale: public StoreSale
{
public:
	WholesaleStoreSale() { discountValue = 0.25; };
	~WholesaleStoreSale() {};

private:
	double discountValue;
};

class RetailStoreSale: public StoreSale
{
public:
	RetailStoreSale() { discountValue = 0.10; };
	~RetailStoreSale() {};

private:
	double discountValue;
};

#endif