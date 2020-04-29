#pragma once
#include <iostream>
#include "cursor.h"

template <typename T>
class PosValue {
private:
	int x, y;
	T value;
public:
	PosValue(int ax, int ay, T av);
	void outValue();
};