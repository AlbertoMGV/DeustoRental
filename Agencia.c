#include <stdio.h>
#include <stdlib.h>
#include "Agencia.h"
#include "string.h"



Agencia* crearAgencia(int CP, char* ciudad, char* pais, char* direccion, int codigo){
    Agencia *ag = (Agencia*) malloc(sizeof(Agencia))

<<<<<<< HEAD
    ag->ciudad = malloc(strlen(ciudad) + 1);
    ag->pais = malloc(strlen(pais) + 1);
    ag->direccion = malloc(strlen(direccion) + 1);
=======
    ag->CP = CP;
    ag->ciudad = malloc(strlen(ciudad) + 1);
    ag->pais = malloc(strlen(pais) + 1);
    ag->direccion = malloc(strlen(direccion) + 1);
    ag->codigo = codigo;
>>>>>>> 7e57ecc5080d052b163fa90d71a30484e90d870c

    strcpy(ag->ciudad, ciudad);
    strcpy(ag->pais, pais);
    strcpy(ag->direccion, direccion);

    return ag;
};
