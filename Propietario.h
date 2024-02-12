//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <iostream>

using namespace std;

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(std::string nombre);

    void mostrarInfo();

    string getNombre();

    void setNombre(std::string nombre);

    string getdocIdentidad();

    void setdocIdentidad(string docIdentidad);

    int getedad();

    void setedad(int edad);



};


#endif //PROPIETARIO_H
