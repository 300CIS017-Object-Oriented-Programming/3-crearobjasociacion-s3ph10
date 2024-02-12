//
// Created by kevin on 2/10/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_VETERINARIO_H
#define INC_3_CREAROBJASOCIACION_VETERINARIO_H
#include <string>
#include <iostream>
#include "Propietario.h"
using namespace std;


class Veterinario {
    private:
        string nombre;
        int years_ex;

    public:
        Veterinario(string nombre, int years_ex);



        string getnombre();

        void setnombre(string nombre);

        int getyears_ex();

        void setyears_ex(int years_ex);



};


#endif //INC_3_CREAROBJASOCIACION_VETERINARIO_H
