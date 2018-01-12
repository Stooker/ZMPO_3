#pragma once
#include "Vehicle.h"

class Boat :
	public virtual Vehicle
{
public:

	Boat();
	Boat(char* name);
	void travel();

};

