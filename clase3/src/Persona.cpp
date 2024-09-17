#include "../headers/Persona.h"



Persona::Persona(std::string name, int edad): name(name),edad(edad){}

void Persona::set_edad()
{
	int n;
	std::cout << "ingrese la edad: ";
	std::cin >> n;
	this->edad = n;
}

void Persona::set_name()
{
	fflush(stdin);
	std::string  n;
	std::cout << "ingrese su nombre: ";
	std::getline(std::cin,name);
}

void Persona::set_info()
{
	Persona::set_name();
	Persona::set_edad();
}


std::string Persona:: get_name()
{
	return this->name;
}

int Persona:: get_edad()
{
	return this->edad;
}

