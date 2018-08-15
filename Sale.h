/*****************************************************************************************
Project Name: Lab 7
Name: Kristopher Lowell
Date Completed: 8/13/2018
Purpose: Using polymorphism and inheritance, create classes to deal with different types
of sales.
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
	double getPrice() { return (double) price; };

	virtual double bill() = 0;
	virtual double calculateTax(double taxRate = 0) { return price * taxRate; };

private:
	string product;
	double price;
};

// --------------------------ONLINE SALE --------------------------

class OnlineSale : public Sale
{
public:
	OnlineSale() { taxRate = 0.10; };
	~OnlineSale() { };

	void setAddress(string addressVal) { address = addressVal; };
	string getAddress() { return address; };

	double calculateTax() { return this->getPrice() * taxRate; };

	double bill() { return this->getPrice() + this->calculateTax(); };

private:
	double taxRate;
	string address;
};

// -------------------------- STORE SALE --------------------------

class StoreSale : public Sale
{
public:
	StoreSale() { taxRate = 0.20; };
	~StoreSale() { };

	double getTaxRate() { return taxRate; };

	double calculateTax() { return this->getPrice() * taxRate; };

	double calculateDiscountedValue(double discountValue) { return this->getPrice() * (1.00 - discountValue); };

	virtual double bill() { return this->getPrice() + this->calculateTax(); };

private:
	double taxRate;
};

// -------------------------- WHOLESALE STORE SALE --------------------------

class WholesaleStoreSale : public StoreSale
{
public:
	WholesaleStoreSale() { discountValue = 0.25; };
	~WholesaleStoreSale() {};

	double calculateDiscountedValue() { return this->getPrice() * (1.00 - discountValue); };

	double calculateDiscountedTax() { return this->calculateDiscountedValue() * this->getTaxRate(); };

	double bill() { return calculateDiscountedValue() + calculateDiscountedTax(); };

private:
	double discountValue;
};

// -------------------------- RETAIL STORE SALE --------------------------

class RetailStoreSale : public StoreSale
{
public:
	RetailStoreSale() { discountValue = 0.10; };
	~RetailStoreSale() {};

	double calculateDiscountedValue() { return this->getPrice() * (1.00 - discountValue); };

	double calculateDiscountedTax() { return this->calculateDiscountedValue() * this->getTaxRate(); };

	double bill() { return calculateDiscountedValue() + calculateDiscountedTax(); };

private:
	double discountValue;
};

#endif