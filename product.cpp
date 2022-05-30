#include "product.h"


	Product::Product(string prodName, double price, int catID, int productID) {
		this->prodName = prodName;
		this->price = price;
		this->catID = catID;
		this->productID = productID;
	}
	void Product::display()const {
		cout << "Name: " << prodName << " Price: " << price << " Category ID: " << catID << "Product ID: " << productID << endl;
	}

	double Product::getPrice()const {
		return price;
	}
	string Product::getProductName() const{
		return prodName;
	}
	int Product::getCatId()const {
		return catID;
	}
	int Product::getProductID()const {
		return productID;
	}
	void Product::setPrice(double price){
		this->price = price;

	}

