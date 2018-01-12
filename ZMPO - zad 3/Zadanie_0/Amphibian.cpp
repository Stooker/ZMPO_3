#include "Amphibian.h"
#include <cstdio>

Amphibian::Amphibian(char* name) :
	Vehicle(name)
{

};

void Amphibian::travel()
{
	printf("Amphibian: %s traveling\n", this->getName());
}
