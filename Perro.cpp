#include "Perro.h"
#include <iostream>
#include <string>
#include "Veterinario.h"
#include "RazaC.h"

using namespace std;


// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
/*
Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}
*/

Perro::Perro(int edad, string nombre , string raza , string tamanio , string color,Veterinario *pVeterinario, RazaC *pRaza) : nombre(nombre), edad(edad), raza(raza), tamanio(tamanio), color(color), pVeterinario(
        pVeterinario), pRaza(pRaza){}


void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}

void Perro::agregarVeterinario(std::string nombre, int years_ex) {
    this->pVeterinario = new Veterinario(nombre,years_ex);
}

void Perro::setVeterinario(Veterinario *pVeterinario) {
    this->pVeterinario=pVeterinario;
}

Veterinario *Perro::getVeterinario() {
    return this -> pVeterinario;
}

void Perro::agregarRazaC(std::string nombre, std::string pais_origen) {

    this -> pRaza = new RazaC(nombre,pais_origen);

}

void Perro::setRazaC(RazaC *pRaza) {
    this->pRaza=pRaza;
}

RazaC *Perro::getRazaC() {
    return this ->pRaza;
}

void Perro::mostrarinfop(){

    cout<< "edad: " << edad << endl << "nombre: " << nombre << endl << "raza: " << raza << endl << "size: " << tamanio << endl << "color: " << color << endl;

    if (pVeterinario != nullptr) {
        cout << "Información del Veterinario: " << endl;
        cout << "Nombre: " << pVeterinario->getnombre() << endl;
        cout << "Años de experiencia: " << pVeterinario->getyears_ex() << endl;
    } else {
        cout << "Este perro no tiene un veterinario asignado." << endl;
    }

    if (pRaza != nullptr) {
        cout << "Informacion Raza: " << endl;
        cout << "Nombre: " << pRaza->getnombre() << endl;
        cout << "Pais de origen: " << pRaza->getpais_origen() << endl;
    } else {
        cout << "Este perro no tiene una raza asignada." << endl;
    }
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}




