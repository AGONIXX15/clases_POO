#include "../include/Agenda.h"
#include <vector>


Agenda::Agenda(){}

void Agenda::add_contacto(Contacto& contactico)
{
		
	
	contactico.set_info();
	contactico.set_indice(v.size()+1);
	this->v.push_back(contactico);
}

void Agenda::update_contacto(Contacto& contactico,std::string number)
{
	
	int j = 0;
	for(int i = 0; i < v.size(); ++i)
	{
		if (v[i].telefono == number)
		{
			v[i].set_info();
			j += 1;
		} else 
			continue;
	}

	if(j == 0)
		std::cout << "No se encontro el contacto a actualizar" << std::endl;
	else 
		std::cout << "se encontro el contacto a actualizar" << std::endl;
	
}

void Agenda::delete_contacto(std::string n)
{
	int j = 0;
	for(int i = 0; i < v.size(); ++i)
	{
		if (v[i].nombre == n)
		{
			v.erase(v.begin()+i);
			j += 1;
		}else 
			continue;
	}
	if(j == 0)
		std::cout << "no se encontro el contacto que querias borrar" << std::endl;
	else 
			std::cout << "Contacto ha sido exitosamente borrado" << std::endl;
		
}




std::vector <Contacto> Agenda::get_vector() const
{
	return this->v;
}

void Agenda::menu()
{
	int opc;
	Contacto contactico;
	do 
	{
		std::cout << "Bienvenido al menu de la agenda" << std::endl;
		std::cout << "1. Para añadir contactos" << std::endl; 
		std::cout << "2. listar los contactos" << std::endl;
		std::cout << "3. eliminar contacto" << std::endl;
		std::cout << "4. actualizar contacto" << std::endl;
		std::cout << "5. salir..." << std::endl;
		std::cin >> opc;
		std::cin.ignore();
		switch(opc)
		{
			case 1:
				this->add_contacto(contactico);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;

		}
	}while(opc != 5);
}

std::ostream& operator <<(std::ostream& os,const Agenda& obj)
{
	std::vector <Contacto> v= obj.get_vector();
	for(int i = 0; i < v.size();++i)
	{
		os << v[i].indice << " " << v[i].nombre << " " << v[i].telefono << 
			" " << v[i].correo << std::endl;
	}
	return os;
}

