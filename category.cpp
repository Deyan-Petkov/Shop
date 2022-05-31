#include "category.h"


	Category::Category(int catID, string catName, string description):Item(catName,catID) {
		this->ID = catID;
		this->name = catName;
		this->description = description;
	}

	/*void Category::categoryDisplay()
	{
		cout << "Category ID: " << ID << " Category Name: " << name << " Description: " << description << endl;
	}*/

	ostream& operator<<(ostream& ostr, Category& category) {
		ostr << "Category ID: " << category.getCatID() << "\tCategory Name: " << category.getCatName()
			<< "\tDescription: " << category.getCatDescription() << endl;
		return ostr;
	}

	int Category::getCatID() const {
		return ID;
	}
	string Category::getCatName() {
		return name;
	}
	string Category::getCatDescription() {
		return description;
	}

	vector<Product>& Category::getProducts() {
		return products;
	}
