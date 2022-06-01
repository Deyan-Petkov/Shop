#include "customer.h"


Customer::Customer(Shop& shop) :User(shop) {
	this->shop = &shop;
}

void Customer::addToCart() {
	int categoryID, productID, quantity;
	cout << "\nPlease provide category ID , product ID and quantity\n";
	cin >> categoryID >> productID >> quantity;

	for (Category& c : (*shop).getCategories()) {
		if (c.getCatID() == categoryID) {
			for (Product& p : c.getProducts()) {
				if (p.getProductID() == productID) {
					cout << "\nItem successfully added!\n";
					cart.push_back(make_pair(p,quantity));
					break;
				}
			}
			break;
		}
	}	
}

void Customer::seeCart() {
	double totalPrice = 0;
	cout << endl;
	for (pair<Product, int> c : cart) {
		cout << c.first << "\tQuantity: " << c.second << "\n";
		totalPrice += (c.first.getPrice() * c.second);
	}
	cout << "\nTotal Price: " << totalPrice << endl;
}


void Customer::deleteProduct(int productID, int quantity) {
	for (int i = 0; i < cart.size(); i++) {
		if (cart.at(i).first.getProductID() == productID) {
			if (cart.at(i).second > quantity) {
				cart.at(i).second -= quantity;
				cout <<"\n"<<quantity << cart.at(i).first.getProductName() << " removed";
			}
			else {
				cart.erase(cart.begin()+i);
				cout << "\nAll " << cart.at(i).first.getProductName() << " removed";
			}
		}
	}
}
void Customer::clearCart() {
	cart.clear();
}