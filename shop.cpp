#pragma once
#include "shop.h"
#include <string>
#include <vector>
using namespace std;


	void Shop::newProduct() {

		cout << "\nEnter Category ID: ";
		cin >> catID;
		cout << "\nEnter Product ID: ";
		cin >> productID;
		cout << "\nEnter Product Name: ";
		while (prodName.length() == 0)
			getline(cin, prodName);
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
		cout << "\nEnter Category ID: ";
		cin >> catID;
		cout << "\nEnter Category Name: ";
		cin >> catName;
		cout << "\nEnter Description: ";
		while (description.length() == 0)
			getline(cin, description);
		Category newCat = Category(catID, catName, description);
		allCategories.push_back(newCat);
	}


	vector<Category>& Shop::getCategories(){
		return allCategories;
	}

