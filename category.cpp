#include "category.h"


	Category::Category(int catID, string catName, string description) {
		this->catID = catID;
		this->catName = catName;
		this->description = description;
		products = {};
	}

	void Category::categoryDisplay()
	{
		cout << "Category ID: " << catID << " Category Name: " << catName << " Description: " << description << endl;
	}

	int Category::getCatID() const {
		return catID;
	}
	string Category::getCatName() {
		return catName;
	}

	vector<Product>& Category::getProducts() {
		return products;
	}
