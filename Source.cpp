#include "shop.h"
#include "admin.h"
#include <fstream>

void adminMenu();
void customerMenu();

Shop shop;
Admin admin = Admin(shop);
Customer customer;

int main() {


	int choice;
	do {
		cout << "\nWho are you\n";
		cout << "\n1 ADMIN";
		cout << "\n2 CUSTOMER";
		cout << "\n3 EXIT";
		cin >> choice;

		switch (choice) {
			case 1:adminMenu(); break;
			case 2: customerMenu(); break;
			case 3: break;
			default: cout << "\n Invalid choice\n";
		}
	} while (choice != 3);

	//admin.addCategory();
	//admin.addProduct();
	//admin.seeAllProducts();

}

void adminMenu() {
	int choice;
	do {
		cout << "\n1 Add a new product";
		cout << "\n2 Add a new category";
		cout << "\n3 Display products by price range";
		cout << "\n4 Display categories";
		cout << "\n5 Exit";
		cin >> choice;

		switch (choice) {
		case 1: admin.addProduct(); break;
		case 2: admin.addCategory(); break;
		case 3: admin.seeProducstByPriceRange(); break;
		case 4: admin.seeCategories(); break;
		case 5: break;
		default: cout << "\n Invalid choice\n";
		}
	} while (choice != 5);
}

void customerMenu() {
	do {
		cout << "\nWho are you\n";
		cout << "\n1 Add a product";
		cout << "\n2 CUSTOMER";
		cout << "\n3 EXIT";
		cin >> choice;

		switch (choice) {
		case 1: adminMenu(); break;
		case 2: customerMenu(); break;
		case 3: break;
		default: cout << "\n Invalid choice\n";
		}
	} while (choice != 3);
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