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

Reserva* crearReserva(char* fecha_i, char* fecha_f, int id, Cliente cliente, Coche coche, Agencia agencia);
Reserva** leerReservas();

Reserva* modificarReserva();


#endif // RESERVA_H_INCLUDED
