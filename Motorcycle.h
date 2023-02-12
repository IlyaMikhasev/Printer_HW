#pragma once
#include "IVehicle.h"
class Motorcycle :public IVehicle {
public:
	Motorcycle(int speed);
	int GetSpeed()const override;
	void printType()const override;
private:
	int _speed;

};
