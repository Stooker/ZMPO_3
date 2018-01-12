#pragma once
class Vehicle
{
public:
	Vehicle(char* name);
	virtual char* getName() { return name; };
	virtual void travel() = 0;
	
protected:
	char* name;
};

