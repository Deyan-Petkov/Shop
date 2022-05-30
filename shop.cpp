#pragma once
#include "shop.h"
#include <string>
#include <vector>
using namespace std;


	void Shop::newProduct() {
		string prodName;
		double price;
		int catID, productID;
		cout << "\nEnter Category ID: ";
		cin >> catID;
		cout << "\nEnter Product ID: ";
		cin >> productID;
		cout << "\nEnter Product Name: ";
		cin >> prodName;
		cout << "\nEnter Price: ";
		cin >> price;
		Product newProd = Product(prodName, price, catID, productID);

		for (Category& c : allCategories) {
			if (c.getCatID() == catID)
				c.getProducts().push_back(newProd);
		}
	};

	void Shop::newCategory()
	{
		int catID;
		string catName;
		string description;
		cout << "\nEnter Category ID: ";
		cin >> catID;
		cout << "\nEnter Category Name: ";
		cin >> catName;
		cout << "\nEnter Description: ";
		cin >> description;
		Category newCat = Category(catID, catName, description);
		allCategories.push_back(newCat);
	}


	vector<Category>& Shop::getCategories(){
		return allCategories;
	}

