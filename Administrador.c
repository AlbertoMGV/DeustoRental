#include <stdio.h>
#include <stdlib.h>
#include <Administrador.h>

Administrado* crearAdministrador(int id, char* email){
    Administrador *a = (Administrador*) malloc(sizeof(Administrador));

    a->email = malloc(strlen(email) + 1);

    strcpy(a->email, email);

    return a;

};
