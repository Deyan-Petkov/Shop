#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "product.h"
using namespace std;


class Category {
protected:
	vector <Product> products;
	int catID;
	string catName;
	string description;

public:
	Category(int catID, string catName, string description);
	void categoryDisplay();
	int getCatID() const;
	string getCatName();
	vector<Product>& getProducts();
};