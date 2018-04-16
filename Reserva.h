#ifndef RESERVA_H_INCLUDED
#define RESERVA_H_INCLUDED

#include "Cliente.h"
#include "Agencia.h"
#include "Coche.h"

typedef struct{

    int id;
    Cliente cliente;
    Coche coche;
    Agencia agencia;
    char* fecha_i;
    char* fecha_f;

} Reserva;


#endif // RESERVA_H_INCLUDED
