//
// Created by kevin on 2/10/2024.
//

#include <string>
#include <iostream>
#include "Veterinario.h"
using namespace std;

Veterinario::Veterinario(string nombre, int years_ex): nombre(nombre), years_ex(years_ex){}

string Veterinario::getnombre() {
    return nombre;
}

void Veterinario::setnombre(std::string nombre) {
    this -> nombre = nombre;
}

int Veterinario::getyears_ex() {
    return years_ex;
}

void Veterinario::setyears_ex(int years_ex) {
    this -> years_ex = years_ex;
}