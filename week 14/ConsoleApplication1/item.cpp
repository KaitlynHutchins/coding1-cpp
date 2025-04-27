#include "item.h"

// In c++ the first enum value is 0 then counts up
enum Location  { GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY };

item::item() {
	location = MARKET;
}



void item::use() {
	cout << "You have used the item\n";
}

void item::examine() {
	cout << "This item is called " << name << endl;
	cout << "It is located at the ";
	if (location == 0) {
		cout << "GreatHall";
	}
	else if (location == 1) {
		cout << "Dungeon";
	}
	else if (location == 2) {
		cout << "Courtyard";
	}
	else if (location == 3) {
		cout << "Market";
	}
	else if (location == 4) {
		cout << "Inventory";
	}
	else {
		cout << "ERROR: Location Not Found";
	}
	cout << endl;
}
