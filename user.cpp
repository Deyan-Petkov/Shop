#include "user.h"


void User::seeProductsByCatName(string catName) {
	for (Category& c : shop.getCategories()) {
		if (c.getCatName().compare(catName) == 0) {
			for (Product& p : c.getProducts()) {
				p.display();
			}
		}
	}
}

void User::seeAllProducts() {
	for (Category& c : shop.getCategories()) {
		c.categoryDisplay();
		cout << endl;
		for (Product& p : c.getProducts()) {
			p.display();
			cout << endl;
		}
	}
}