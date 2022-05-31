#pragma once
#include "shop.h"
#include "admin.h"
#include "customer.h"

void adminMenu();
void customerMenu();

Shop shop;
Admin admin = Admin(shop);
Customer customer = Customer(shop);
string catName = "";

int main() {
	shop.readCategories();
	shop.readProducts();
	//cout << "cat size: " << shop.getCategories().size() << endl;


	int choice;
	do {
		cout << "\nWho are you\n";
		cout << "\n1 ADMIN";
		cout << "\n2 CUSTOMER";
		cout << "\n3 EXIT\n";
		cin >> choice;

		switch (choice) {
			case 1:adminMenu(); break;
			case 2: customerMenu(); break;
			case 3: break;
			default: cout << "\n Invalid choice\n";
		}
	} while (choice != 3);

}

void adminMenu() {
	int choice;
	do {
		cout << "\n1 Add a new product";
		cout << "\n2 Add a new category";
		cout << "\n3 Display products by price range";
		cout << "\n4 Display products by category";
		cout << "\n5 Display categories";
		cout << "\n6 Display complete details";
		cout << "\n7 Exit\n";
		cin >> choice;

		switch (choice) {
		case 1: admin.addProduct(); break;
		case 2: admin.addCategory(); break;
		case 3: 
			double lowerBound, upperBound;
			cout << "\nPlease enter the lower price and upper price\n";
			cin >> lowerBound >> upperBound;
			admin.seeProducstByPriceRange(lowerBound, upperBound);
			break;
		case 4: 
			cout << "\nWhich category?\n";
			cin >> catName;
			admin.seeProductsByCatName(catName); break;
		case 5: cout << "TO BE IMPLEMENTED" << endl; break;
		case 6: admin.seeAllProducts(); break;
		default: cout << "\n Invalid choice\n";
		}
	} while (choice != 6);
}

void customerMenu() {
	int choice;
	do {
		cout << "\n1 Add a product";
		cout << "\n2 View basket";
		cout << "\n3 Remove item from basket";
		cout << "\n4 Checkout";
		cout << "\n5 Exit\n";
		cin >> choice;

		switch (choice) {
		case 1: 
			cout << "\n1 Display all products";
			cout << "\n2 Display by category\n";
			cin >> choice;
			if (choice == 1) {
				customer.seeAllProducts();
			}
			else if (choice == 2) {
				cout << "\nWhich category?\n";
				cin >> catName;
				customer.seeProductsByCatName(catName);
			}
			customer.addToCart();
			break;
		case 2: customer.seeCart(); break;
		case 3: 
			customer.seeCart();
			int prodID, quantity;
			cout << "\nPlease provide productID and quantity of the item you want to remove\n";
			cin >> prodID >> quantity;
			customer.deleteProduct(prodID, quantity);
			break;
		case 4: break;
		default: cout << "\n Invalid choice\n";
		}
	} while (choice != 5);
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