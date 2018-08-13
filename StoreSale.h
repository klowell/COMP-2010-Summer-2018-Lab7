#ifndef STORESALE_H
#define STORESALE_H

#include "Sale.h"

using namespace std;

class StoreSale : public Sale
{
public:
	StoreSale() { taxRate = 0.20; };
	~StoreSale() { };

	double calculateTax() { Sale *p = this;  return p->calculateTax(taxRate); };

	double calculateDiscountedValue(double discountValue) { return this->getPrice() * (1 - discountValue); };

	virtual double bill() { return this->getPrice() + this->calculateTax(); };

private:
	double taxRate;
};
#endif