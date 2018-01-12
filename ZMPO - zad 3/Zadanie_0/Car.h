#pragma once
#include "Vehicle.h"

class Car :
	public virtual Vehicle
{
public:

	Car();
	Car(char* name);
	void travel();

};


