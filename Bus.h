#pragma once
#include "IVehicle.h"
class Bus :public IVehicle {
public:
	Bus(int speed);
	int GetSpeed()const override;
	void printType()const override;
private:
	int _speed;

};
