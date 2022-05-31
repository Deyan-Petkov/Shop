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
		prodName = "";
		cin.ignore(1, '\n');
		getline(cin, prodName);
		cout << "\nEnter Price: ";
		cin >> price;

		for (Category& c : allCategories) {
			if (c.getCatID() == catID)
			{
				//Product newProd = Product(prodName, price, catID, productID);
				//c.getProducts().push_back(newProd);
				writeProduct(catID, productID, prodName, price);
				c.getProducts().clear();
				readProducts();
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
		cin.ignore(1, '\n');
		getline(cin, description);
		for (Category& c : allCategories) 
			if (c.getCatID() == catID){
				cout << "\nCategory with this ID already exists\n";
				return;
			}
	/*	Category newCat = Category(catID, catName, description);
		allCategories.push_back(newCat);*/
		writeCategory(catID, catName, description);
		allCategories.clear();
		readCategories();
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

	void Shop::writeProduct(int catID, int productID, string prodName, double price)
	{
		fstream productStream(PRODUCTS, fstream::app);
		productStream << catID << DELIM;
		productStream << productID << DELIM;
		productStream << prodName << DELIM;
		productStream << price << DELIM;
		productStream << "\n";
		productStream.close();
	}

	Category Shop::readCategory(string line) {
		stringstream lineStream(line);
		int catID; string catName; string description; char buffer;
		lineStream >> catID >> buffer;
		getline(lineStream, catName, DELIM);
		getline(lineStream, description, DELIM);
		return Category(catID, catName, description);
	}

	Product Shop::readProduct(string line)
	{
		stringstream linestream(line);
		int catID, productID;  string prodName; double price; char buffer;
		linestream >> catID >> buffer;
		linestream >> productID >> buffer;
		getline(linestream, prodName, DELIM);
		linestream >> price >> buffer;
		return Product(prodName,price,catID,productID);
	}

	void Shop::readCategories() {
		fstream categoryStream(CATEGORIES);
		string line;
		while (getline(categoryStream, line)) {
			allCategories.push_back(readCategory(line));
		}
		categoryStream.close();
	}

	void Shop::readProducts() 
	{
		fstream productStream(PRODUCTS);
		string line;
		while (getline(productStream, line)) {
			Product product = readProduct(line);
			for (Category& c : allCategories) {
				if (c.getCatID() == product.getCatId()){
					c.getProducts().push_back(product);
				}
			}
		}
		productStream.close();
	}


	

