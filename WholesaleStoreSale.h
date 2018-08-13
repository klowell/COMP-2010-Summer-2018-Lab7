#ifndef WHOLESALESTORESALE_H
#define WHOLESALESTORESALE_H

#include "StoreSale.h"

using namespace std;

class WholesaleStoreSale : public StoreSale
{
public:
	WholesaleStoreSale() { discountValue = 0.25; };
	~WholesaleStoreSale() {};

	double calculateDiscountedValue() { return this->getPrice() * (1 - discountValue); };

	virtual double bill() 
	{ 
		StoreSale *p = this;
		this->setPrice(p->calculateDiscountedValue(discountValue));
		return this->getPrice() +this->calculateTax(); 
	};

private:
	double discountValue;
};
#endif