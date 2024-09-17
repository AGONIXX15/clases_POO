#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

class Persona
{
public:
Persona(std::string,int);
virtual void set_info();
void set_name();
void set_edad();
std::string get_name();
int get_edad();
private:
std::string name;
int edad;
};
#endif //PERSONA_H
