// Manager.cpp
// 1/2/2019
// Version 0.1
// Implementation for the Manager class; manages the normal gameflow.

#include "Manager.h"

Manager::Manager()
	: store(Restaurant()), debug(false)
{
	for (int i = 0; i < INITIAL; i++)
	{
		currentCustomers.push_back(Customer());
	}

}
Manager::Manager(bool debug_status)
	: store(Restaurant()), debug(debug_status)
{
	for (int i = 0; i < INITIAL; i++)
	{
		currentCustomers.push_back(Customer());
	}
	if (debug)
	{
		for (int i = 0; i < static_cast<int>(currentCustomers.size()); i++)
		{
			currentCustomers.at(i).printStatus();
			cout << endl;
		}
	}
}

void Manager::stock()
{
}

void Manager::open()
{
}

void Manager::calculate()
{
}

void Manager::run()
{
}
