#pragma once
#include "IVehicle.h"
class Car :public IVehicle {
public:
	Car(int speed);
	int GetSpeed()const override;
	void printType()const override;
private:
	int _speed;

};
