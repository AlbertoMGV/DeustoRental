#include "Reserva.h"

Reserva::Reserva(char* fecha_i, char* fecha_f, int id, Cliente cliente, Coche coche, Agencia agencia) : coche(), cliente(), agencia(){
        this->id=id;
        this->cliente=cliente;
        this->coche=coche;
        this->agencia=agencia;
        this->fecha_i=fecha_i;
        this->fecha_f=fecha_f;
}
Reserva::~Reserva()
{

}
//Getters
int Reserva::getId()
{
    return id;
}
Cliente Reserva::getCliente()
{
    return cliente;
}
Coche Reserva::getCoche()
{
    return coche;
}
Agencia Reserva::getAgencia()
{
    return agencia;
}
char* Reserva::getFecha_i()
{
    return fecha_i;
}
char* Reserva::getFecha_f()
{
    return fecha_f;
}
//Setters
void Reserva::setId(int id)
{
    this->id=id;
}
void Reserva::setCliente(Cliente cliente)
{
    this->cliente=cliente;
}
void Reserva::setCoche(Coche coche)
{
    this->coche=coche;
}
void Reserva::setAgencia(Agencia agencia)
{
    this->agencia=agencia;
}
void Reserva::setFecha_i(char* fecha_i)
{
    this->fecha_i=fecha_i;
}
void Reserva::setFecha_f(char* fecha_f)
{
    this->fecha_f=fecha_f;
}
