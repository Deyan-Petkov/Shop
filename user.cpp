#include "user.h"


User::User(Shop& shop) {
	this->shop = &shop;
}

void User::seeProductsByCatName(string catName) {
	for (Category& c : (* shop).getCategories()) {
		if (c.getCatName().compare(catName) == 0) {
			for (Product& p : c.getProducts()) {
				cout << p;
			}
		}
	}
}

void User::seeAllProducts() {
	for (Category& c : (* shop).getCategories()) {
		cout << "\n-----\t\t\t-----\t\t\t-----" << endl;
		cout << c;
		cout << "\t-----\t\t\t\-----\t\t\t-----" << endl;
		for (Product& p : c.getProducts()) {
			cout << p;
			cout << endl;
		}
	}
}