#include "user.h"


void User::seeProductsByCatName(string catName) {
	for (Category& c : shop.getCategories()) {
		if (c.getCatName().compare(catName) == 0) {
			for (Product& p : c.getProducts()) {
				cout << p;
			}
		}
	}
}

void User::seeAllProducts() {
	for (Category& c : shop.getCategories()) {
		cout << c;
		cout << endl;
		for (Product& p : c.getProducts()) {
			cout << p;
			cout << endl;
		}
	}
}