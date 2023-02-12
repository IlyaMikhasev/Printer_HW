#include <iostream>
#include "Bus.h"
#include "Car.h"
#include "Motorcycle.h"
#include "IVehicle.h"
#include "Printer.h"
int main() {
	setlocale(LC_ALL, "Russian");
	std::shared_ptr<IVehicle> car = std::make_shared<Car>(90);
	std::shared_ptr<IVehicle> bus = std::make_shared<Bus>(60);
	std::shared_ptr<IVehicle> moto = std::make_shared<Motorcycle>(120);
	Printer Veh;
	Veh.AddVeh(car);
	Veh.AddVeh(bus);
	Veh.AddVeh(moto);
	Veh.showTypeVeh();
	return 0;
}