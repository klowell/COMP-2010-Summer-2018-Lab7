#ifndef ONLINESALE_H
#define ONLINESALE_H

#include "Sale.h"

using namespace std;

class OnlineSale : public Sale
{
public:
	OnlineSale() { taxRate = 0.10; };
	~OnlineSale() { };

	double calculateTax() { Sale *p = this;  return p->calculateTax(taxRate); };
	virtual double bill() { return this->getPrice() + this->calculateTax(); };

private:
	double taxRate;
	string address;
};
#endif