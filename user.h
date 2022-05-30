#pragma once
#include <string>
#include <vector>
#include "product.h"
#include "shop.h"
using namespace std;

class User {
protected:
	Shop shop;
public:
	void seeProductsByCatName(string catName);
	void seeAllProducts();

};
