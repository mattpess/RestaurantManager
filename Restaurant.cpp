// Restaurant.dh
// 1/1/2019
// Version 0.1
// Implementation for Restaurant objects; tracks the food storage and prompts the user to choose how much to stock the restaurant.

#include "Restaurant.h"

Restaurant::Restaurant()
: item1_stock(0), item2_stock(0),item3_stock(0),item4_stock(0), score(0)
{
}

bool Restaurant::setStock(int i1, int i2, int i3, int i4)
{
	
}

int Restaurant::calculateLoss()
{
	return 0;
}

bool Restaurant::hasItem(int item_index)
{
	return false;
}
