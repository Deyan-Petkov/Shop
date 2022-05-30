#pragma once
#include <string>
#include <vector>
#include "user.h"

using namespace std;


//1) Place the order by Product details
//before htat he should be able to view
//Products a)All products
//b) Based on category
//2) Based on Quantity(Calculate price)
//3) Products added to the cart should have
//a) Remove item / Product
//b) Clear Cart

class Customer : public User{
protected:
	vector<pair <Product, int> > cart;
public:
	void placeOrder(int categoryID, int productID);
	void seeProductsByQuantity();//?
	void deleteProduct(int productID, int quantity);
	void clearCart();
};