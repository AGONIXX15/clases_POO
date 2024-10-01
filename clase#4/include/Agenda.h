#ifndef AGENDA_H
#define AGENDA_H

#include <ostream>
#include <vector>
#include "Contacto.h"

class Agenda 
{
	public:
		std::vector <Contacto> v; 
		Agenda();
		void add_contacto(Contacto& contactito);
		void update_contacto(Contacto& contactito,std::string number);	
		void delete_contacto();
		std::vector <Contacto> get_vector() const;
		void menu();
		friend std::ostream& operator <<(std::ostream& os,const Agenda& obj);

};




#endif
