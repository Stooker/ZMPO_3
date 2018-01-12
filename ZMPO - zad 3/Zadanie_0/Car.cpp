#include "Car.h"
#include <cstdio>

Car::Car(): Vehicle(nullptr)
{

}

Car::Car(char * name) : Vehicle(name)
{

}

void Car::travel()
{
	printf("Car: %s traveling\n", this->getName());
}
