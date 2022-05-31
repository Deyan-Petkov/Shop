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
		prodName = "";
		while (prodName.length() == 0)
			getline(cin, prodName);
		cout << "\nEnter Price: ";
		cin >> price;
		Product newProd = Product(prodName, price, catID, productID);

		for (Category& c : allCategories) {
			if (c.getCatID() == catID)
			{
				c.getProducts().push_back(newProd);
				return;
			}
		}
		cout << "No category with this name.";
	};



	void Shop::newCategory()
	{
		cout << "\nEnter Category ID: ";
		cin >> catID;
		cout << "\nEnter Category Name: ";
		cin >> catName;
		cout << "\nEnter Description: ";
		description = "";
		while (description.length() == 0)
			getline(cin, description);
		Category newCat = Category(catID, catName, description);
		allCategories.push_back(newCat);
	}




	vector<Category>& Shop::getCategories(){
		return allCategories;
	}

