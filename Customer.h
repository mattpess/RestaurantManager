// Customer.cpp
// 12/29/2019
// Version 0.1
// Header for Customer objects; dictates preferences and actions of a customer visiting the restaurant

#ifndef CUST_H
#define CUST_H


#include <iostream>
#include <string>
#include <random>
#include <time.h>
#include <algorithm>

using namespace std;
// used with calculating preference for each item for customer
const static int MAX = 20;


class Customer
{
public:
	/*
	Purpose: Default constructor.
	Parameters: None.
	Output: Customer populated with preferences.
	*/
	Customer();
	/*
	Purpose: Reset the items the customer has tried to ask for.
	Parameters: None.
	Output: hasTried reset to all false.
	*/
	void reset();
	/*
	Purpose: Randomly chooses a option based on the odds for a customer.
	Parameters: None.
	Output: The number of the choice made, 0 if all choices have been exhausted.
	*/
	int chooseItem();
	/*
	Purpose: Display variables of customer.
	Parameters: None.
	Output: All member variables of the customer printed to the console.
	*/
	void printStatus();
	/*
	Purpose: Change status of hasTried for specific item to true
	Parameters: Item number of item attempted
	Output: hasTried[int - 1] = true
	*/
	void setTried(int item);

private:
	int item1_pref;
	int item2_pref;
	int item3_pref;
	int item4_pref;
	bool hasTried[4] = { false };
};

#endif

