#pragma once
#include <string>
#include <vector>
#include "product.h"
#include "shop.h"
using namespace std;

class User {
protected:
	Shop* shop;
public:
	User(Shop& shop);
	void seeProductsByCatName(int catID);
	void seeAllProducts();
	void seeCategoryNames();

};
