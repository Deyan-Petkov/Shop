#include "customer.h"

void Customer::placeOrder(int categoryID, int productID) {

}
//?
void Customer::seeProductsByQuantity() {

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