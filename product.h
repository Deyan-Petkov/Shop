#pragma once
#include <string>
#include <iostream>
using namespace std;


class Product {

protected:
	string prodName;
	double price;
	int catID, productID;

public:

	Product(string prodName, double price, int catID, int productID);
	void display()const;
	double getPrice()const;
	string getProductName()const;
	int getCatId()const;
	int getProductID()const;
	void setPrice(double price);

};
