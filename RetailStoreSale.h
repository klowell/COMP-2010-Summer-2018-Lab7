#ifndef RETAILSTORESALE_H
#define RETAILSTORESALE_H

#include "StoreSale.h"

using namespace std;

class RetailStoreSale : public StoreSale
{
public:
	RetailStoreSale() { discountValue = 0.10; };
	~RetailStoreSale() {};

	virtual double bill()
	{
		StoreSale *p = this;
		this->setPrice(p->calculateDiscountedValue(discountValue));
		return this->getPrice() + this->calculateTax();
	};

private:
	double discountValue;
};
#endif