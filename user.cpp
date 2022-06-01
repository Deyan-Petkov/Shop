#include "user.h"


User::User(Shop& shop) {
	this->shop = &shop;
}

void User::seeProductsByCatName(int catID) {
	for (Category& c : (* shop).getCategories()) {
		if (c.getCatID() == catID) {
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

void User::seeCategoryNames() {
	int counter=0;
	for (Category& c : shop->getCategories()) {
		cout <<c.getCatID() << "." << c.getCatName() << " \t";
		if (++counter % 2 == 0) cout << endl;
	}
}
