#pragma once
#include "category.h"
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

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
	void writeCategory(int catID, string catName, string description);
	Category readCategory(string line);
	void readCategories();
	void writeProduct(int catID, int productID, string prodName, double price);
	Product readProduct(string line);
	void readProducts();
	void seeProductsByCatName(int catID);

	//void initShop();

};
