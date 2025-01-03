#pragma once
#include <string>

class Persona {
    public:
        std::string getNombre();
        bool setNombre(std::string nombre);
    private:
        int _idPersona;
        char _nombre[50];
};
