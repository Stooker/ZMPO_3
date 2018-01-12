#include <vector>
#include <stdlib.h>
#include <time.h>
#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"
#include "Amphibian.h"

int main()
{

	Car car("Car1");
	Amphibian amphibian("Amph1");

	Vehicle * vCar = &car;
	Vehicle * vBoat = new Boat("Boat1");
	Vehicle * vAmphibian = &amphibian;

	vCar->travel();
	vBoat->travel();
	vAmphibian->travel();

    return 0;

}

