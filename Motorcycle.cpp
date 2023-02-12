#include "Motorcycle.h"
Motorcycle::Motorcycle(int speed) :_speed(speed) {}
int Motorcycle::GetSpeed() const{
	return _speed;
}

void Motorcycle::printType() const{
	std::cout << "Motorcycle\n";
}
