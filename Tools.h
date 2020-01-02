// Tools.h
// 1/2/2019
// Version 0.1
// Header for generic class of functions that help optimize workflow and improve clarity

#ifndef TOOL_H
#define TOOL_H

class Tools
{
public:
	/*
	Purpose: Compare if an integer is between two numbers, inclusive.
	Parameters: low and high values of the range, num is number to be compared.
	Output: True if range is valid and num falls within it, false otherwise.
	*/
	bool rangeInclusive(int low, int high, int num);
	/*
	Purpose: Compare if an integer is between two numbers, excluding the two numbers.
	Parameters: low and high values of the range, num is number to be compared.
	Output: True if range is valid and num falls within it, false otherwise.
	*/
	bool rangeExclusive(int low, int high, int num);
};

#endif

