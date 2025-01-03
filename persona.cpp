#include "persona.h"
#include <cstring>

std::string Persona::getNombre() {
    return _nombre;
}

bool Persona::setNombre(std::string nombre) {
    strcpy(_nombre, nombre.c_str());
}
