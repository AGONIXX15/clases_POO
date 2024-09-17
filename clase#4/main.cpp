#include <iostream>
#include <vector>
#include "include/Agenda.h"
#include "include/Contacto.h"


int main()
{
	Agenda obj;
	Contacto contact;
	obj.add_contacto(contact);
	obj.add_contacto(contact);
	std::cout << obj << std::endl;
	return 0;
}
