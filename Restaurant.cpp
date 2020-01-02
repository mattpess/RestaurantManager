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
	// check that the provided number is above 0 before setting the stock to it
	item1_stock = (i1 > 0) ? i1 : item1_stock;
	item2_stock = (i2 > 0) ? i2 : item2_stock;
	item3_stock = (i3 > 0) ? i3 : item3_stock;
	item4_stock = (i4 > 0) ? i4 : item4_stock;
	if (i1 <= 0 || i2 <= 0 || i3 <= 0 || i4 <= 0)
		return false;
	return true;
}

int Restaurant::calculateLoss()
{
	int sum = item1_stock + item2_stock + item3_stock + item4_stock;
	score -= sum;
	return sum;
}

bool Restaurant::hasItem(int item_index)
{
	switch (item_index)
	{
	case 1: 
		if (item1_stock != 0) 
		{
			item1_stock--;
			return true;
		}
		break;
	case 2: 
		if (item2_stock != 0)
		{
			item2_stock--;
			return true;
		}
		break;
	case 3:
		if (item3_stock != 0)
		{
			item3_stock--;
			return true;
		}
		break;
	case 4:
		if (item4_stock != 0)
		{
			item4_stock--;
			return true;
		}
		break;
	default: 
		return false;
	}
	return false;
}
