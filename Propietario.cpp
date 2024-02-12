//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"
using namespace std;
#include <string>
#include "iostream"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(std::string nombre) {
 this->nombre = nombre;


}



std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

string Propietario::getdocIdentidad() {
    return docIdentidad;
}

void Propietario::setdocIdentidad(std::string docIdentidad) {
    this -> docIdentidad=docIdentidad;
}

int Propietario::getedad() {
    return edad;
}

void Propietario::setedad(int edad) {
    this -> edad=edad;
}

void Propietario::mostrarInfo() {

    cout<< "nombre:" << nombre << endl << "docIdentidad:" << docIdentidad << endl << "edad: " << edad;

}