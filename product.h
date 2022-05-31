#pragma once
#include <string>
#include <iostream>
#include "item.h"
using namespace std;


class Product : public Item{

protected:
	double price;
	int catID;

public:

	Product(string prodName, double price, int catID, int productID);
	//void display()const;
	double getPrice()const;
	string getProductName()const;
	int getCatId()const;
	int getProductID()const;
	void setPrice(double price);
	friend ostream& operator<<(ostream& ostr, Product& product);

};
