#pragma once
#include "shop.h"


using namespace std;
const string CATEGORIES = "categories.txt";
const string PRODUCTS = "products.txt";
const char DELIM = '|';


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
		while (description.length() == 0)
			getline(cin, description);
		Category newCat = Category(catID, catName, description);
		allCategories.push_back(newCat);
		writeCategory(catID, catName, description);
	}




	vector<Category>& Shop::getCategories(){
		return allCategories;
	}

	//void Shop::initShop() {
	//	fstream shop_items;
	//	shop_items.open(CATEGORIES);
	//	if (shop_items.is_open()) {
	//		string line;
	//		while (getline(shop_items, line)) {

	//		}
	//	}

	//}


	void Shop::writeCategory(int catID, string catName, string description) {
		fstream categoryStream(CATEGORIES, fstream::app);
		categoryStream << catID << DELIM;
		categoryStream << catName << DELIM;
		categoryStream << description << DELIM;
		categoryStream << "\n";
		categoryStream.close();
	}

	Category Shop::readCategory(string line) {
		stringstream lineStream(line);
		int catID; string catName; string description; char buffer;
		lineStream >> catID >> buffer;
		getline(lineStream, catName, DELIM);
		getline(lineStream, description, DELIM);
		return Category(catID, catName, description);
	}

	void Shop::readCategories() {
		fstream categoryStream(CATEGORIES);
		string line;
		while (getline(categoryStream, line)) {
			allCategories.push_back(readCategory(line));
		}
		categoryStream.close();
	}