//
// Created by kevin on 2/11/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_RAZAC_H
#define INC_3_CREAROBJASOCIACION_RAZAC_H
#include <string>
#include <iostream>

using namespace std;

class RazaC {

    private:
        string nombre;
        string pais_origen;

    public:
        RazaC(string nombre, string pais_origen);

        string getnombre();

        void setnombre(string nombre);

        string getpais_origen();

        void setpais_origen(string pais_origen);




};


#endif //INC_3_CREAROBJASOCIACION_RAZAC_H
