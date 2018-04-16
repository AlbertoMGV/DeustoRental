#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Administrador.h"

Administrador* crearAdministrador(int id, char* email){
    Administrador *a = (Administrador*) malloc(sizeof(Administrador));

    a->id = id;
    a->email = malloc(strlen(email) + 1);

    strcpy(a->email, email);

    return a;

};
