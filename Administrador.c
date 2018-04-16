#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Administrador.h"

Administrador* crearAdministrador(int id, char* email){
    Administrador *a = (Administrador*) malloc(sizeof(Administrador));

<<<<<<< HEAD
=======
    a->id = id;
>>>>>>> 7e57ecc5080d052b163fa90d71a30484e90d870c
    a->email = malloc(strlen(email) + 1);

    strcpy(a->email, email);

    return a;

};
