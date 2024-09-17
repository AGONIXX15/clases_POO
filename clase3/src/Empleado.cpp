#include "../headers/Empleado.h"
#include <string>


Empleado::Empleado(std::string name, int edad):Persona(name,edad){}

void Empleado::saludar_empleado()
{
	std::cout << this->name << " " << "te saluda" << std::endl;
}

float Empleado::get_sueldo()
{
	return this->sueldo;
}

void Empleado::set_sueldo()
{
	float s;
	std::cout << "ingrese el sueldo: ";
	std::cin >> s;
	this->sueldo = s;
}

void Empleado::set_info()
{
	Persona::set_info();
	Empleado::set_sueldo();
}

 std::ostream& Empleado::operator<<(std::ostream& os)
{
	os << this->get_name() << " " << this->get_edad() << " " << this->get_sueldo();
	return os;
}
