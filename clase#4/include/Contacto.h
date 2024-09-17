#ifndef CONTACTO_H
#define CONTACTO_H
#include <iostream>
#include <string>
#include <vector>


class Contacto 
{
	public:
	
		Contacto();
		Contacto(int indice);
		
		void set_nombre();
		void set_telefono();
		void set_correo();
		void set_indice(int n);
		void set_info();


			
		std::string nombre;
		std::string telefono;
		std::string correo;
		int indice;
};


#endif

