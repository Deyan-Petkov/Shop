#pragma once
#include "category.h"

class Shop {

protected:
	vector<Category> allCategories;
public:
	void newProduct();
	void newCategory();
	vector<Category>& getCategories();

};
