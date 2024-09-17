#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include "Persona.h"

class Empleado:public Persona 
{
	public:
	Empleado(std::string,int);
	void saludar_empleado();
	float get_sueldo();
	void set_sueldo();
	void set_info();
	std::ostream& operator <<(std::ostream& os);
	private:
	std::string name;
	int edad;
	float sueldo;
};



#endif // EMPLEADO_H
