#include "Bus.h"
Bus::Bus(int speed):_speed(speed) {}

void Bus::printType() const{
	std::cout << "Bus\n";
}

int Bus::GetSpeed() const{
		return _speed;
}
