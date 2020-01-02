// Customer.cpp
// 12/29/2019
// Version 0.1
// Implementation for Customer objects; dictates preferences and actions of a customer visiting the restaurant

#include "Customer.h"


Customer::Customer()
{

	// makes sure the percentages equal to MAX
	int sum = 0;
	int temp_array[4];

	temp_array[0] = rand() % (MAX + 1); // 0 - 20
	sum += temp_array[0];
	temp_array[1] = rand() % (MAX + 1 - sum); // 0 - (20 - item1)
	sum += temp_array[1];
	temp_array[2] = rand() % (MAX + 1 - sum); // 0 - (20 - item1 - item2)
	sum += temp_array[2];
	temp_array[3] = MAX - sum;

	random_shuffle(begin(temp_array), end(temp_array));

	item1_pref = temp_array[0];
	item2_pref = temp_array[1];
	item3_pref = temp_array[2];
	item4_pref = temp_array[3];

}

void Customer::reset()
{
	for (bool value : hasTried)
		value = false;
}

int Customer::chooseItem()
{
	int sum = 0;
	if (!hasTried[0]) 
	{
		sum += item1_pref;
	}
	if (!hasTried[1]) 
	{
		sum += item2_pref;
	}
	if (!hasTried[2]) 
	{
		sum += item3_pref;
	}
	if (!hasTried[3]) 
	{
		sum += item4_pref;
	}

	int choice = rand() % (sum) + 1; // 1 - 20
	int x = 1;
	do
	{
		if (x == 1)
		{
			if(!hasTried[0])
				choice -= item1_pref;
		}
		else if (x == 2)
		{
			if (!hasTried[1])
				choice -= item2_pref;
		}
		else if (x == 3)
		{
			if (!hasTried[2])
				choice -= item3_pref;
		}
		else
		{
			return 4;
		}
		x++;
	} while (x <= 4 || choice < 0);
	return x - 1;
	
}

void Customer::printStatus()
{
	if (hasTried[0])
		printf("The customer prefers the first item %d%% and has attempted to select it.\n", (item1_pref*5));
	else
		printf("The customer prefers the first item %d%% and has not attempted to select it.\n", (item1_pref * 5));
	if(hasTried[1])
		printf("The customer prefers the second item %d%% and has attempted to select it.\n", (item2_pref * 5));
	else
		printf("The customer prefers the second item %d%% and has not attempted to select it.\n", (item2_pref * 5));
	if (hasTried[2])
		printf("The customer prefers the third item %d%% and has attempted to select it.\n", (item3_pref * 5));
	else
		printf("The customer prefers the third item %d%% and has not attempted to select it.\n", (item3_pref * 5));
	if (hasTried[3])
		printf("The customer prefers the fourtht item %d%% and has attempted to select it.\n", (item4_pref * 5));
	else
		printf("The customer prefers the fourth item %d%% and has not attempted to select it.\n", (item4_pref * 5));
	
}

void Customer::setTried(int item)
{
	if(item <= 4 && item > 0)
		hasTried[item - 1] = true;
}
