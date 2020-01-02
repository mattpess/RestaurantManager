// Manager.h
// 1/2/2019
// Version 0.1
// Header for the Manager class; manages the normal gameflow.

#ifndef MAN_H
#define MAN_H

#include <vector>
#include "Customer.h"
#include "Restaurant.h"

// initial size of customer base
const static int INITIAL = 20;

class Manager
{
public:
	/*
	Purpose: Default constructor for Manager.
	Parameters: None.
	Output: Non-debug Manager object.
	*/
	Manager();
	/*
	Purpose: Debug constructor for Manager.
	Parameters: debug_status is used to set debug to true or false.
	Output: Debug Manager object if true, default Manager object otherwise.
	*/
	Manager(bool debug_status);
	/*
	Purpose: First action of the loop; allow user to stock the restaurant as they please.
	Parameters: None.
	Output: User's inputs are used to populate the Restaurant stock.
	*/
	void stock();
	/*
	Purpose: Second action of the loop; system runs the day's simulation for the customers visiting
	Parameters: None
	Output: Stock modified based on customers' actions.
	*/
	void open();
	/*
	Purpose: Final action of the loop; calculate the points gain and loss from the day.
	Parameters: None.
	Output: Score modified based on stock.
	*/
	void calculate();
	/*
	Purpose: Encapsulates the elements of the loop into a single method.
	Parameters: None.
	Output: None.
	*/
	void run();
private:
	vector<Customer> currentCustomers;
	Restaurant store;
	bool debug;
};	

#endif

