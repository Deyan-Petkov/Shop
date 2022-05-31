#include "customer.h"

void Customer::addToCart(int categoryID, int productID, int quantity) {
	for (Category& c : shop.getCategories()) {
		if (c.getCatID() == categoryID) {
			for (Product& p : c.getProducts()) {
				if (p.getProductID() == productID) {
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
			}
			else {
				cart.erase(cart.begin()+i);
			}
		}
	}
}
void Customer::clearCart() {
	cart.clear();
}