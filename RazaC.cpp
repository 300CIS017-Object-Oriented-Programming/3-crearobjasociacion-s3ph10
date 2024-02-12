//
// Created by kevin on 2/11/2024.
//

#include "RazaC.h"
#include <string>
#include <iostream>

using namespace std;
RazaC::RazaC(std::string nombre, std::string pais_origen):nombre(nombre) , pais_origen(pais_origen) {}

string RazaC::getnombre() {
    return nombre;
}

void RazaC::setnombre(std::string nombre) {
    this -> nombre=nombre;
}

string RazaC::getpais_origen() {
    return pais_origen;
}

void RazaC::setpais_origen(std::string pais_origen) {
    this ->pais_origen=pais_origen;
}