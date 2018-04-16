#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Coche.h"

Coche* crearCoche(char* marca, char* modelo, char* matricula, float kilometraje, int capacidad, int usuarios, char* tipo){
    Coche *c = (Coche*) malloc(sizeof(Coche));
    c->marca = malloc(strlen(marca) + 1);
    c->modelo = malloc(strlen(modelo) + 1);
    c->matricula = malloc(strlen(matricula) + 1);
    c->tipo = malloc(strlen(tipo) + 1);
    c->kilometraje = kilometraje;
    c->capacidad = capacidad;
    c->usuarios = usuarios;
    strcpy(c->marca, marca);
    strcpy(c->modelo, modelo);
    strcpy(c->matricula, matricula);
    strcpy(c->tipo, tipo);

    //almacenar a bd / archivo de texto

    return c;
}

Coche** leerCoches(){

    //leer del archivo de texto y devolver array

}

Coche** modificarCoches();

