#pragma once
#include "category.h"

class Shop {

protected:
	vector<Category> allCategories;
	int catID, productID;
	string catName;
	string description = "";
	string prodName = "";
	double price;
public:
	void newProduct();
	void newCategory();
	vector<Category>& getCategories();

};
