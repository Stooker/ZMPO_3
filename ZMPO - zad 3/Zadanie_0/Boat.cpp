#include "Boat.h"
#include <cstdio>

Boat::Boat(): Vehicle(nullptr)
{

}

Boat::Boat(char* name) : Vehicle(name)
{

};

void Boat::travel()
{
	printf("Boat: %s traveling\n", this->getName());
}
