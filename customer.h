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
	Shop* shop;
public:
	Customer(Shop& shop);
	void addToCart();
	void seeCart();
	void deleteProduct(int catID, int productID, int quantity);
	void clearCart();
};