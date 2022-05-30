#pragma once
#include <string>
#include "user.h"
using namespace std;

class Admin : public User{
protected:
public:
	Admin(Shop& shop);
	void addProduct();
	void addCategory();
	void seeProducstByPriceRange(double lowerBound, double upperBound);
	void seeCategories();

};