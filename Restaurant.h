// Restaurant.h
// 1/1/2019
// Version 0.1
// Header for Restaurant objects; tracks the food storage and prompts the user to choose how much to stock the restaurant.

#ifndef REST_H
#define REST_H

class Restaurant
{
public:
	/*
	Purpose: Default constructor.
	Parameters: None.
	Output: Restaurant with empty stock.
	*/
	Restaurant();
	/*
	Purpose: Set the stock of all.
	Parameters: Each int parameter is the stock of the corresponding item.
	Output: True if all parameters are valid, false otherwise.
	*/
	bool setStock(int i1,  int i2, int i3, int i4);
	/*
	Purpose: Reduce points by the number of overstocked items.
	Parameters: None.
	Output: points - [sum of item stocks].
	*/
	int calculateLoss();
	/*
	Purpose: Check if an item is in stock.
	Parameters: item_index is a value between 1-4 that dictates which item is being checked.
	Output: True (and item stock - 1) if stock is not zero, false otherwise.
	*/
	bool hasItem(int item_index);
private:
	int item1_stock;
	int item2_stock;
	int item3_stock;
	int item4_stock;
	int score;
};

#endif
