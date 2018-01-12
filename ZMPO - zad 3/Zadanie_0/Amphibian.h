#pragma once
#include "Car.h"
#include "Boat.h"

class Amphibian
	: public Car, public Boat
{
public:

	Amphibian(char* name);
	void travel();

private:

	Car * car;
	Boat * boat;

};

