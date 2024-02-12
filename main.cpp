#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Veterinario.h"
#include "RazaC.h"
using namespace std;

int main() {

    // Instanciar
    /*
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;
     */


    Veterinario *Pedro = new Veterinario("PEDRO",21);
    RazaC *Mastin_Napolitano = new RazaC("Mastin Napolitano", "Italia");
    Perro *alfonso = new Perro(100, "alfonso" , "shandosin" , "grande" , "marron", Pedro, Mastin_Napolitano);

    alfonso -> ladrar();

    //alfonso->setVeterinario(Pedro);

    alfonso->mostrarinfop();
    cout <<endl;

    Veterinario *Pablo = new Veterinario("Pablo",54);
    RazaC *Maltes = new RazaC("Maltas", "Italia");
    Perro *fufurufo = new Perro(200 , "fufurufo" , "Maltes" , "Mediano" , "Verde", Pablo , Maltes);

    fufurufo->mostrarinfop();

/*
    Propietario *Visal = new Propietario("Visal");

    Visal->setdocIdentidad("1004022024");

    Visal ->setedad(23);

    Visal -> mostrarInfo();
    */










    delete Pedro;
    delete alfonso;
    delete Pablo;
    //delete Visal;
    return 0;


}

