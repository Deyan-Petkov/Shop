#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "product.h"
#include "item.h"
using namespace std;


class Category :Item{
protected:
	vector <Product> products;
	string description;

public:
	Category(int catID, string catName, string description);
	//void categoryDisplay();
	int getCatID() const;
	string getCatName();
	string getCatDescription();
	vector<Product>& getProducts();
	friend ostream& operator<<(ostream& ostr, Category& category);

};

