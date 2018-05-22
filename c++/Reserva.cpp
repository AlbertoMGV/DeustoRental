#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Reserva.h"

Reserva::Reserva(char* fecha_i, char* fecha_f, int id, Cliente cliente, Coche coche, Agencia agencia){
        this->id=id;
        this->cliente=cliente;
        this->coche=coche;
        this->agencia=agencia;
        this->fecha_i=fecha_i;
        this->fecha_f=fecha_f;
}
Reserva:~Reserva()
{

}
//Getters
int getId()
{
    return id;
}
Cliente getCliente()
{
    return cliente;
}
Coche getCoche()
{
    return coche;
}
Agencia getAgencia()
{
    return agencia;
}
char* getFecha_i()
{
    return fecha_i;
}
char* getFecha_f()
{
    return fecha_f;
}
//Setters
void setId(int id)
{
    this->id=id;
}
void setCliente(Cliente cliente)
{
    this->cliente=cliente;
}
void setCoche(Coche coche)
{
    this->coche=coche;
}
void setAgencia(Agencia agencia)
{
    this->agencia=agencia;
}
void setFecha_i(char* fecha_i)
{
    this->fecha_i=fecha_i;
}
void setFecha_f(char* fecha_f)
{
    this->fecha_f=fecha_f;
}
