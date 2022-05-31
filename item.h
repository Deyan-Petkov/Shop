#pragma once
#include <string>
#include <iostream>
using namespace std;

class Item {
protected:
	string name;
	int ID;

public:
	Item(string name, int ID) {
		this->name = name;
		this->ID = ID;
	}
	//friend ostream& operator<<(ostream& ostr, Item& item);


};