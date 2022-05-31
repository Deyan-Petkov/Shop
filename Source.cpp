#include "shop.h"
#include "admin.h"
#include <fstream>

int main() {

	Shop shop;
	Admin admin = Admin(shop);

	admin.addCategory();
	admin.addProduct();
	admin.seeAllProducts();

}


//build shopping cart
//Admin
/*
	1) Add products
		PID PNAME PRICE CAT_ID
		111 LUX	  40    11
		112 SUNSILK 80  12
	2) Add Categories
		CAT_ID CAT_NAME DESCRIPTION
		11     SOAP		Some desc
		12	   SHAMPOO  some ----
	3) See all records based on
		a) CAT_NAME
		b) Range of Price  (20-50) display in this range
		c) Complete details
			111 LUX	  40    11		112 SUNSILK 80  12
User
	1) Place the order by Product details
			before htat he should be able to view
				Products a)All products
						 b) Based on category
	2) Based on Quantity (Calculate price)
	3) Products added to the cart should have
		a) Remove item/Product
		b) Clear Cart
*/