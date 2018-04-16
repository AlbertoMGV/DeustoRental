#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cliente.h"


Cliente* crearCliente(char* nombre, char* apellido, int edad, char* direccion, char* dni){
    Cliente *c = (Cliente*) malloc(sizeof(Cliente));
    c->nombre = malloc(strlen(nombre) + 1);
    c->apellido = malloc(strlen(apellido) + 1);
    c->direccion = malloc(strlen(direccion) + 1);
    c->dni = malloc(strlen(dni) + 1);
    strcpy(c->nombre, nombre);
    strcpy(c->apellido, apellido);
    strcpy(c->direccion, direccion);
    strcpy(c->dni, dni);

    //almacenar a bd / archivo de texto

    return c;
}