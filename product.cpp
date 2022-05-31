#include "product.h"


	Product::Product(string prodName, double price, int catID, int productID):Item(prodName,productID) {
		this->name = prodName;
		this->price = price;
		this->catID = catID;
		this->ID = productID;
	}
	/*void Product::display()const {
		cout << "Name: " << name << " Price: " << price << " Category ID: " << catID << "Product ID: " << ID << endl;
	}*/
	ostream& operator<<(ostream& ostr, Product& product) {
		ostr << "Name: " << product.name << "\tPrice: " << product.price << "\tCategory ID: " 
			<< product.catID << "\tProduct ID: " << product.ID << endl;
		return ostr;
	}


	double Product::getPrice()const {
		return price;
	}
	string Product::getProductName() const{
		return name;
	}
	int Product::getCatId()const {
		return catID;
	}
	int Product::getProductID()const {
		return ID;
	}
	void Product::setPrice(double price){
		this->price = price;

	}

