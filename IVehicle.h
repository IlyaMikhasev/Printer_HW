#pragma once
#include <iostream>
class IVehicle {
public:
	virtual int GetSpeed()const = 0;
	virtual void printType()const = 0;
	virtual ~IVehicle() {}
};
