//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "RazaC.h"
using namespace std;

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    RazaC* pRaza;

public:
    Perro(int edad, string nombre , string raza , string tamanio , string color, Veterinario *pVeterinario, RazaC *pRaza);
    ~Perro(); //Destructor

    void ladrar();
    Propietario * getPropietario();
    Veterinario * getVeterinario();
    RazaC * getRazaC();

    // Sirve para.......
    void agregarPropietario(std::string nombre);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);

    void agregarVeterinario(string nombre, int years_ex);

    void setVeterinario(Veterinario *pVeterinario);

    void agregarRazaC(string nombre, string pais_origen);

    void setRazaC(RazaC *pRaza);

    void mostrarinfop();

    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif
