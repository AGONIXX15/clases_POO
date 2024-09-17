#include "headers/Empleado.h"
#include "headers/Persona.h"
#include <iostream>


int main()
{
	Empleado obj1("sapito",23);
	obj1.saludar_empleado();
	obj1.set_info();
	std::cout << obj1;
}
