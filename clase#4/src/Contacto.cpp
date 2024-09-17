#include "../include/Contacto.h"
#include <string>
#include <utility>



Contacto::Contacto(){}

Contacto::Contacto(int indice):indice(indice){}

void Contacto::set_nombre()
{
	std::string name;
	std::cout << "ingrese el nombre del contacto" << std::endl;
	std::getline(std::cin,name);
	this->nombre = name;
}


void Contacto::set_telefono()
{
	std::string telefono;
	std::cout << "Ingrese su numero de telefono de su contacto" << std::endl;
	std::getline(std::cin,telefono);
	this->telefono = telefono;
}

void Contacto::set_correo()
{
	std::string correo;
	std::cout << "Ingrese el correo de su contacto" << std::endl;
	std::getline(std::cin,correo);
	this->correo = correo;
}

void Contacto::set_indice(int indice)
{
	this->indice = indice;
}

void Contacto::set_info()
{
	 set_nombre();
	 set_telefono();
	 set_correo();
}
