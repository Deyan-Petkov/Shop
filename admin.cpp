#include "admin.h"


Admin::Admin(Shop& shop) {
	this->shop = shop;
}
void Admin::addProduct() {
	shop.newProduct();
}
void Admin::addCategory() {
	shop.newCategory();

}

void Admin::seeProducstByPriceRange(double lowerBound, double upperBound) {
	for (Category& c : shop.getCategories()) {
		for (Product& p : c.getProducts()) {
			if (p.getPrice() >= lowerBound && p.getPrice() <= upperBound)
				p.display();
		}
	}
}
void Admin::seeCategories() {
	for (Category& c : shop.getCategories()) {
		c.categoryDisplay();
	}
}


