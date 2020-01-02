#include "Tools.h"

bool Tools::rangeInclusive(int low, int high, int num) { return (low < high) ? (num >= low && num <= high) : false;  }

bool Tools::rangeExclusive(int low, int high, int num) { return (low < high) ? (num > low && num < high) : false; }


