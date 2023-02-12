#include "Car.h"
Car::Car(int speed) :_speed(speed) {}
int Car::GetSpeed() const{
	return _speed;
}

void Car::printType() const{
	std::cout << "Car\n";
}
